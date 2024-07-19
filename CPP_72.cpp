#include <iostream>
#include <vector>
#include <cassert>

bool will_it_fly(const std::vector<int>& q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (q == std::vector<int>(q.rbegin(), q.rend()) && sum <= w) {
        return true;
    }
    return false;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    
    return 0;
}