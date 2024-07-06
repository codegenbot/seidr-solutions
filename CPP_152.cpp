#include <vector>
#include <cmath>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (issame(std::vector<int>({game[i]}), std::vector<int>(guess.begin(), guess.begin() + 1))) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}