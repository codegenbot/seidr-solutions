#include <iostream>
#include <vector>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

bool issame(std::vector<int> game, std::vector<int>) {
    // your implementation here
    return false;
}

int main() {
    std::vector<int> game = {1, 2, 3};
    std::vector<int> guess = {1, 4, 3};

    std::vector<int> result = compare(game, guess);

    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    if (issame(game, guess)) {
        std::cout << "The game and the guess are same." << std::endl;
    } else {
        std::cout << "The game and the guess are different." << std::endl;
    }

    return 0;
}