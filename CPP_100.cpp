#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <iterator>

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

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(std::begin(a), std::end(a), std::begin(b));
}

int main() {
    std::vector<int> expected {8, 10, 12, 14, 16, 18, 20, 22};
    std::vector<int> result = make_a_pile(8);
    if (is_same(result, expected)) {
        std::cout << "Output: Same" << std::endl;
    } else {
        std::cout << "Output: Different" << std::endl;
    }
    return 0;
}