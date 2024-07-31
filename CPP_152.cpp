#include <vector>
#include <cassert>
#include <cmath>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess);

bool issame(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(std::abs(game[i] - guess[i]));
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}