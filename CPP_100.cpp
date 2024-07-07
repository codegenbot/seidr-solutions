#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2; i <= n; i += 2) {
        pile.push_back(i);
    }
    return pile;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(issame(make_a_pile(8), std::vector<int>({2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22})));
    return 0;
}