#include <vector>

std::vector<std::pair<int, int>> get_collatz(int n) {
    std::vector<std::pair<int, int>> result;
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            result.push_back({i, 1});
        } else if (i % 2 == 0) {
            result.push_back({i, i / 2});
        } else {
            result.push_back({i, 3 * i + 1});
        }
    }
    return result;
}

bool issame(std::vector<std::pair<int, int>> a, std::vector<std::pair<int, int>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int testMain() {
    assert(issame(get_collatz(1), {{1, 1}}));
    return 0;
}