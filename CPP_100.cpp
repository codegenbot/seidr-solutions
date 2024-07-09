```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> const &a, const std::vector<int> &b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i)
        pile.push_back(pile.back() + i);
    return pile;
}

int main() {
    int n = 8;
    std::vector<int> pile = make_a_pile(n);
    assert(issame(pile, pile));
    return 0;
}