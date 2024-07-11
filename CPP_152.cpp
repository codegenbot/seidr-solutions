#include <iostream>
#include <vector>

bool issame(int x, int y) {
    return x == y;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (issame(game[i], guess[i])) {
            result.push_back(0);
        } else {
            result.push_back(abs(guess[i] - game[i]));
        }
    }
    return result;
}