```cpp
#include <iostream>
#include <vector>

namespace myspace {
    bool issame(std::vector<int> a, std::vector<int> b) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }

    std::vector<int> compareGameGuess(std::vector<int> game, std::vector<int> guess) {
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

        std::vector<int> game; 

        for (int i = 0; i < n; i++) {
            std::cout << "Enter element " << i + 1 << ": ";
            int num;
            std::cin >> num;
            game.push_back(num);
        }

        std::vector<int> guess(n);
        std::cout << "Enter your guess: ";
        for (int i = 0; i < n; i++) {
            std::cout << "Enter element " << i + 1 << ": ";
            int num;
            std::cin >> num;
            guess[i] = num;
        }

        if (issame(game, guess)) {
            std::cout << "Congratulations! You guessed correctly." << std::endl;
        } else {
            std::vector<int> result = compareGameGuess(game, guess);
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
}