#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 8; i <= n; i += 2) {
        pile.push_back(i);
    }
    return pile;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}