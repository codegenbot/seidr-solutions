#include <vector>

bool compareVectors(const std::vector<int>& a, const std::vector<int>& b) {
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
    for (int i = 2 * n; i > n; i -= 2) {
        pile.push_back(i);
    }
    return pile;
}

int test_main() {
    assert(compareVectors(make_a_pile(8), std::vector<int>({8, 6, 4, 2})) == 0);
    return 0;
}