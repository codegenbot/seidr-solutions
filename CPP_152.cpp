#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(std::abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    assert(issame(compare(std::vector<int>{1, 2, 3, 5}, std::vector<int>{-1, 2, 3, 4}), std::vector<int>{2, 0, 0, 1}));
    return 0;
}