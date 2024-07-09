```
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else if (find(game.begin(), game.end(), guess[i]) != game.end()) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}