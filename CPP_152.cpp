#include <vector>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            int diff = abs(guess[i] - game[i]);
            if (diff == 1) {
                if (!issame(game[i], guess[i]-1)) {
                    result.push_back(1);
                }
                if (!issame(game[i], guess[i]+1)) {
                    result.push_back(2);
                }
            } else {
                result.push_back(diff);
            }
        }
    }
    return result;
}