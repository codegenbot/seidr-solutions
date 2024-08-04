#include <vector>
#include <cassert>

vector<int> compare(vector<int> game, vector<int> guess) {
    assert(game.size() == guess.size());
    
    vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}