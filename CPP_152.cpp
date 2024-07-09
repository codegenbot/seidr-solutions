#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
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

int main() {
    assert(std::equal(compare({1,2,3,5},{-1,2,3,4}),{0,0,0,1}));
}