#include <vector>
#include <cmath>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compareVect(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            int difference = std::abs(game[i] - guess[i]);
            result.push_back(difference);
        }
    }
    return result;
}