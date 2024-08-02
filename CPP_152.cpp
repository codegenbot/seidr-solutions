#include <vector>
#include <algorithm>

bool issame(vector<int> game, vector<int> guess) {
    if (game.size() != guess.size())
        return false;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i])
            return false;
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
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
            result.push_back(2);
        }
    }
    return result;
}