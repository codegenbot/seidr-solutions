```
#include <iostream>
#include <vector>
#include <numeric>

bool will_it_fly(std::vector<int> q, int w) {
    bool balanced = true;
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - 1 - i]) {
            balanced = false;
            break;
        }
    }
    return balanced && std::accumulate(q.begin(), q.end(), 0) <= w;
}

int main() {
    int n, w;
    std::cin >> n >> w;
    std::vector<int> q(n);
    for (auto& i : q) {
        std::cin >> i;
    }
    if (will_it_fly(q, w)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}