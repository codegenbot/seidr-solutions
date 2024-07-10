#include <vector>

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else {
            for (int j = 1; j <= abs(game[i] - guess[i]); j++) {
                if (game[i] > guess[i])
                    result.push_back(1);
                else
                    result.push_back(3);
            }
        }
    }
    return result;
}