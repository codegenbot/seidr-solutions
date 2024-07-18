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
    std::vector<int> game = {1, 2, 3};
    std::vector<int> guess = {3, 2, 1};

    std::vector<int> diff = compare(game, guess);

    for (int i = 0; i < diff.size(); ++i) {
        std::cout << diff[i] << " ";
    }

    std::cout << std::endl;

    if (issame(game, guess)) {
        std::cout << "Game and Guess are the same." << std::endl;
    } else {
        std::cout << "Game and Guess are different." << std::endl;
    }

    return 0;
}