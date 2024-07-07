```cpp
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
    std::cout << "Enter the number of queries: ";
    std::cin >> n;
    std::cout << "Enter the weight limit: ";
    std::cin >> w;

    for (int i = 0; i < n; i++) {
        std::vector<int> q;
        int q_len;
        std::cout << "Enter the length of query " << i + 1 << ": ";
        std::cin >> q_len;
        for (int j = 0; j < q_len; j++) {
            int x;
            std::cout << "Enter weight " << j + 1 << ": ";
            std::cin >> x;
            q.push_back(x);
        }
        if (will_it_fly(q, w)) {
            std::cout << "The query will fly.\n";
        } else {
            std::cout << "The query won't fly.\n";
        }
    }

    return 0;
}