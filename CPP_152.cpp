#include <iostream>
#include <vector>

bool std::issame(std::vector<int> game, std::vector<int> guess) {
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
    int n, m;
    std::cin >> n >> m;

    std::vector<int> game(n);
    for (int i = 0; i < n; i++) {
        std::cin >> game[i];
    }

    std::vector<int> guess(m);
    for (int i = 0; i < m; i++) {
        std::cin >> guess[i];
    }

    if (!std::issame(game, guess)) {
        std::cout << "The game is not over.\n";
    } else {
        std::cout << "The game is over.\n";

        for (int i = 0; i < game.size(); i++) {
            if (game[i] == guess[i]) {
                std::cout << "Correct number: ";
                std::cout << game[i];
                std::cout << "\n";
            } else {
                std::cout << "Incorrect number.\n";

                if (abs(game[i] - guess[i]) < 10) {
                    std::cout << "Too close, try again.\n";
                }
            }
        }
    }

    return 0;
}