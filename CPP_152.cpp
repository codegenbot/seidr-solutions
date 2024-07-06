#include <vector>
bool issame(vector<int> a,vector<int>b);

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else {
            int diff = abs(game[i] - guess[i]);
            if (diff == game[i] || diff == guess[i]) {
                result.push_back(1);
            } else {
                result.push_back(0);
            }
        }
    }
    return result;
}