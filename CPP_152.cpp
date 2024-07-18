#include <vector>
#include <iostream>

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
    std::vector<int> game = {1, 2, 3};
    std::vector<int> guess = {2, 3, 4};

    std::vector<int> diff = compare(game, guess);

    for (int i = 0; i < diff.size(); ++i) {
        std::cout << diff[i] << " ";
    }

    if (issame(game, guess)) {
        std::cout << "\nGuess is correct!\n";
    } else {
        std::cout << "\nGuess is incorrect!\n";
    }

    return 0;
}