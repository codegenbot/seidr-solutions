#include <vector>
bool issame(vector<int> a,vector<int>b);

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            if (issame({game[i], guess[i]}, {guess[i]-1, guess[i]+1})) {
                result.push_back(-1);
            } else {
                result.push_back(abs(game[i] - guess[i]));
            }
        }
    }
    return result;
}