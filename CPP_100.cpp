```cpp
#include <algorithm>
#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2; i <= n; ++i) {
        pile.push_back(i * 2);
    }
    return pile;
}

int main() {
    std::vector<int> pile = make_a_pile(8);
    std::sort(pile.begin(), pile.end());
    for (auto it = pile.begin(); it != pile.end(); ++it) {
        *it -= 1;
    }
    std::vector<int> expected = {8, 10, 12, 14, 16, 18, 20, 22};
    assert(std::equal(pile.begin(), pile.end(), expected.begin()));
    return 0;
}