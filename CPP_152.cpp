```cpp
#include <vector>
#include <iostream>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess);

int main() {
    std::vector<int> game;
    int numGames;
    std::cout << "Enter the number of games: ";
    std::cin >> numGames;

    for (int i = 0; i < numGames; i++) {
        int number;
        std::cout << "Enter the result of game " << i + 1 << ": ";
        std::cin >> number;
        game.push_back(number);
    }

    std::vector<int> guess;
    for (int i = 0; i < numGames; i++) {
        int number;
        std::cout << "Enter your guess for game " << i + 1 << ": ";
        std::cin >> number;
        guess.push_back(number);
    }

    std::vector<int> result = compare(game, guess);

    for (int i = 0; i < numGames; i++) {
        if (game[i] == guess[i]) {
            std::cout << "Game " << i + 1 << ": Correct\n";
        } else {
            std::cout << "Game " << i + 1 << ": Off by " << result[i] << "\n";
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