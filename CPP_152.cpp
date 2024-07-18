#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    std::vector<int> game = {1, 2, 3, 4};
    std::vector<int> guess = {4, 3, 2, 1};

    std::vector<int> result = compare(game, guess);

    for (int num : result) {
        std::cout << num << " ";
    }

    if (issame(game, guess)) {
        std::cout << "The game and guess are the same." << std::endl;
    } else {
        std::cout << "The game and guess are different." << std::endl;
    }

    return 0;
}