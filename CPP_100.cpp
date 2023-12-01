#include <iostream>
#include <vector>
#include <cassert>

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> piles;
    int stones = n;
    for (int i = 0; i < n; i++) {
        piles.push_back(stones);
        if (n % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
    }
    return piles;
}

int main() {
    assert(is_same(make_a_pile(8), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}