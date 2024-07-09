```cpp
#include <vector>
#include <initializer_list>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i)
        pile.insert(pile.begin(), i);
    return pile;
}