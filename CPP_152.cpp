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
    int correct = 0;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
            correct++;
        } else {
            int diff = abs(guess[i] - game[i]);
            if (issame({guess[i]}, {game[i] + diff, game[i] + 2 * diff}) || 
                issame({guess[i]}, {game[i] + diff, game[i] + 3 * diff})) {
                result.push_back(1);
            } else {
                result.push_back(diff);
            }
        }
    }
    return result;
}