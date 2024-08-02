#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
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
            result.push_back(-1);
        }
    }
    return result;
}