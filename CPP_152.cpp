#include <vector>
#include <cmath>
#include <cassert>
#include <iostream>

std::vector<int> compareGuesses(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(std::abs(game[i] - guess[i]));
        }
    }
    return result;
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(isSame(compareGuesses({1,2,3,5},{-1,2,3,4}), {2,0,0,1}));
    std::cout << "Tests passed" << std::endl;
    return 0;
}