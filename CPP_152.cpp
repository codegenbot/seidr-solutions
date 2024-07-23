#include <vector>
using namespace std;

int issame(vector<int> game, vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) {
            return 0;
        }
    }
    return 1;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    int sameCount = issame(game, guess);
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}