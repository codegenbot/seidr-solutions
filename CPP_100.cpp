#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    for (int i = 0; i < n; ++i) {
        stones.push_back(n + 2 * i);
    }
    return stones;
}

int main() {
    std::vector<int> stones1 = make_a_pile(3);
    std::vector<int> stones2 = make_a_pile(3);

    bool sameStones = issame(stones1, stones2);
    std::cout << "Are the stone piles the same? " << (sameStones ? "Yes" : "No") << std::endl;

    return 0;
}