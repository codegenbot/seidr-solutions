#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (guess[i] == game[i]) {
            result.push_back(1);
        } else if (std::find(game.begin(), game.end(), guess[i]) != game.end()) {
            result.push_back(2);
        } else {
            int diff = abs(guess[i] - game[i]);
            result.push_back(diff);
        }
    }
    return result;
}