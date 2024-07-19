#include <vector>
#include <cmath>

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result(game.size());
    for (size_t i = 0; i < game.size(); ++i) {
        result[i] = std::abs(game[i] - guess[i]);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}