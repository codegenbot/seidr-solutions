#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (guess[i] == game[i]) {
            result.push_back(2);
        } else if (std::count(game.begin(), game.end(), guess[i]) > 0) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}