#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else if (issame({game[i], guess[i]}, {guess[i], game[i]}) || abs(game[i] - guess[i]) > 1) {
            result.push_back(-1);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}