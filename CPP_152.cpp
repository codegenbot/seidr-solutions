#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(std::abs(game[i] - guess[i]));
    }
    return result;
}

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }
}