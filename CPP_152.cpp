#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            int diff = abs(game[i] - guess[i]);
            if (!issame({1,2,3}, {1,2,4})) {
                for (int j : {1,2,3}) {
                    result.push_back(diff);
                }
            }
        }
    }
    return result;
}