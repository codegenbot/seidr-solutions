#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    int black = 0;
    int white = 0;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            black++;
        } else if (find(game.begin(), game.end(), guess[i]) != game.end()) {
            white++;
        }
    }
    result.push_back(black);
    result.push_back(white);
    return result;
}