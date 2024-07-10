#include <vector>

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else if (std::find_if(std::next(std::begin(guess), i),
                                 std::end(guess), 
                                 [x, y=i](int z) { return x==y; }) != std::end(guess)) {
            result.push_back(1);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}