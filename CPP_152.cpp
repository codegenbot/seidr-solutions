```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            int diff = abs(game[i] - guess[i]);
            result.push_back(diff);
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        game.push_back(temp);
    }

    for (int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter your guess: ";
        std::cin >> temp;
        guess.push_back(temp);
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