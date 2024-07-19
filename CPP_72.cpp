#include <iostream>
#include <vector>
#include <cassert>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (sum > w) {
        return false;
    }
    
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - 1 - i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int n, w;
    std::cin >> n >> w;
    std::vector<int> q(n);
    for (int i = 0; i < n; i++) {
        std::cin >> q[i];
    }
    
    assert(will_it_fly(q, w) == true);
    
    return 0;
}