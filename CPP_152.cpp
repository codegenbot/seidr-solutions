```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> game, std::vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result(game.size());
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result[i] = 0;
        } else {
            result[i] = abs(game[i] - guess[i]);
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> game(n);
    std::cout << "Enter the game numbers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> game[i];
    }

    std::vector<int> guess(n);
    std::cout << "Enter your guess: ";
    for (int i = 0; i < n; i++) {
        std::cin >> guess[i];
    }

    if (issame(game, guess)) {
        std::cout << "Congratulations! You guessed correctly." << std::endl;
    } else {
        std::vector<int> result = compare(game, guess);
        std::cout << "Incorrect. The correct numbers are: ";
        for (int i = 0; i < n; i++) {
            if (result[i] == 0) {
                std::cout << game[i] << " ";
            } else {
                std::cout << abs(game[i] - guess[i]) << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}