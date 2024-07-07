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
    std::cout << "Enter the number of quails: ";
    std::cin >> n;
    std::cout << "Enter the weight: ";
    std::cin >> w;
    
    std::vector<int> q(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter the weight of quail " << i + 1 << ": ";
        std::cin >> q[i];
    }
    
    if (will_it_fly(q, w)) {
        std::cout << "The quails will fly." << std::endl;
    } else {
        std::cout << "The quails won't fly." << std::endl;
    }
    
    return 0;
}