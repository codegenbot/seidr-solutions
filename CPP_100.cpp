#include <vector>
#include <algorithm>

bool arePilesSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    int n = 8;
    std::vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i)
        pile.push_back(pile.back() + i);
    assert(arePilesSame(pile, pile));
    return 0;
}