#include <vector>
#include <utility>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::pair<int, int> make_a_pile(int n) {
    std::vector<std::pair<int, int>> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back({2 * i - 1, 2 * i});
    }
    return pile.back();
}