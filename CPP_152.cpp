#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> calculate_difference(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(std::abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    std::vector<int> expected = {2, 0, 0, 1};
    assert(compare(calculate_difference({1, 2, 3, 5}, {-1, 2, 3, 4}), expected));
    return 0;
}