#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    std::vector<int> game = {5, 3, 7};
    std::vector<int> guess = {4, 2, 8};

    std::vector<int> diff = compare(game, guess);

    for (int i = 0; i < diff.size(); ++i) {
        std::cout << diff[i] << " ";
    }

    std::cout << std::endl;

    if (issame(game, guess)) {
        std::cout << "The game and guess are the same." << std::endl;
    } else {
        std::cout << "The game and guess are different." << std::endl;
    }

    return 0;
}