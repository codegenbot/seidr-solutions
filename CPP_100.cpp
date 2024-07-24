#include <vector>
std::pair<int, int> make_a_pile(int n) {
    std::vector<std::pair<int, int>> pile;
    for (int i = 1; i <= n; i++) {
        pile.push_back({2*i - 1, 2*i});
    }
    return *std::max_element(pile.begin(), pile.end());
}