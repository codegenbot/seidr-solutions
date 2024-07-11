#include <vector>
#include <iostream>

std::vector<int> compare(std::vector<int>, std::vector<int>);

int main() {
    std::vector<int> game;
    std::vector<int> guess;

    // input code to read game and guess from user
    // ...

    std::vector<int> result = compare(game, guess);
    
    // print output based on the result
    for (int i : result) {
        if (i == 0) {
            std::cout << "Exact match!\n";
        } else {
            std::cout << "Not exact match. The number of steps to win is: " << i << "\n";
        }
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