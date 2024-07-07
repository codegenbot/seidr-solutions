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
    std::cout << "Enter the number of queens: ";
    std::cin >> n;
    std::vector<int> q(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter the position of queen " << i + 1 << ": ";
        std::cin >> q[i];
    }
    std::cout << "Enter the weight: ";
    std::cin >> w;
    if (will_it_fly(q, w)) {
        std::cout << "The queens will fly.\n";
    } else {
        std::cout << "The queens won't fly.\n";
    }
    return 0;
}