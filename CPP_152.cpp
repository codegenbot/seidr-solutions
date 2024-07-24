#include <vector>
#include <algorithm>

bool issame(std::vector<int> b, std::vector<int> c) {
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != c[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(1);
        } else if (std::find(guess.begin(), guess.end(), game[i]) != guess.end()) {
            result.push_back(0);
        } else {
            result.push_back(-1);
        }
    }
    return result;
}