#include <vector>
#include <algorithm>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    if (!issame(game, guess)) {
        for (int i = 0; i < game.size(); i++) {
            if (game[i] == guess[i]) {
                result.push_back(0);
            } else {
                result.push_back(abs(game[i] - guess[i]));
            }
        }
    } else {
        for (int i = 0; i < game.size(); i++) {
            result.push_back(-1);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}