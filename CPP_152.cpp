#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> game = {1,2,3,5};
    std::vector<int> guess = {-1,2,3,4};
    
    std::vector<int> result = compare(game, guess);
    for(int i: result) {
        std::cout << i << " ";
    }
    return 0;
}

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