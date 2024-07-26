#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        n += (n % 2 == 0) ? 2 : 1;
        stones.push_back(n);
    }
    return stones;
}

int main() {
    std::vector<int> pile1 = make_a_pile(5);
    std::vector<int> pile2 = make_a_pile(7);

    if (issame(pile1, pile2)) {
        std::cout << "Piles are the same" << std::endl;
    } else {
        std::cout << "Piles are different" << std::endl;
    }

    assert(issame(make_a_pile(8), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));

    return 0;
}