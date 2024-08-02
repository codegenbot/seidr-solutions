#include <iostream>
#include <vector>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2); // Correctly guessed number
        } else if (std::find(game.begin(), game.end(), guess[i]) != game.end()) {
            result.push_back(1); // Number is in the game but not correctly guessed
        } else {
            result.push_back(0); // Number is not in the game
        }
    }
    return result;
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 1, 2, 0}));
    return 0;
}