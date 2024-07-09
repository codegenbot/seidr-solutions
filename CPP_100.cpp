```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
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
    if (issame(pile, pile))
        std::cout << "The vector is same." << std::endl;
    else
        std::cout << "The vector is not the same." << std::endl;

    return 0;
}