#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Implementation of issame function
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; i++) {
        if (n % 2 == 0) {
            stones.push_back(n + 2 * i);
        } else {
            stones.push_back(n + 2 * i - 1);
        }
    }
    return stones;
}