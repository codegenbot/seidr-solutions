#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size();
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i)
        pile.push_back(pile.back() + i);
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), std::vector<int>({0, 1, 3, 6, 10, 15, 21, 28})));
    return 0;
}