```cpp
#include <vector>
#include <cassert>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i);
    }
    return pile;
}

int main() {
    assert(isSame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}