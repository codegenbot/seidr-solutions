```
#include <vector>
#include <iostream>

std::vector<int> compare(std::vector<int>, std::vector<int>);

int main() {
    std::vector<int> game = {1,2,3};
    std::vector<int> guess = {4,5,6};

    std::vector<int> result = compare(game, guess);
    
    for (int i : result) {
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
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}