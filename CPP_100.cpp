#include <vector>

bool std::vector<int>::issame(const std::vector<int>& a, const std::vector<int>& b) {
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
    std::vector<int> pile;
    for (int i = 2 * n; i > 0; i -= 2) {
        pile.push_back(i);
    }
    return pile;
}

int test_main() {
    assert(issame(make_a_pile(8), std::vector<int>({8, 6, 4, 2})));
    return 0;
}