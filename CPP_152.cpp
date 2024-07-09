```cpp
#include <iostream>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (issame(game[i], guess[i])) {
            result.push_back(0);
        } else {
            result.push_back(abs(guess[i] - game[i]));
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of games: ";
    std::cin >> n;

    std::vector<std::vector<int>> games(n);
    for (int i = 0; i < n; i++) {
        int m;
        std::cout << "Enter the number of numbers in game " << i + 1 << ": ";
        std::cin >> m;
        games[i].resize(m);
        
        std::cout << "Enter " << m << " numbers for game " << i + 1 << ": ";
        for (int j = 0; j < m; j++) {
            std::cin >> games[i][j];
        }
    }

    int k;
    std::cout << "Enter the number of guesses: ";
    std::cin >> k;

    std::vector<std::vector<int>> guesses(k);
    for (int i = 0; i < k; i++) {
        int m;
        std::cout << "Enter the number of numbers in guess " << i + 1 << ": ";
        std::cin >> m;
        guesses[i].resize(m);
        
        std::cout << "Enter " << m << " numbers for guess " << i + 1 << ": ";
        for (int j = 0; j < m; j++) {
            std::cin >> guesses[i][j];
        }
    }

    for (int i = 0; i < k; i++) {
        std::cout << "Result for guess " << i + 1 << ": ";
        for (int j = 0; j < games[0].size(); j++) {
            std::cout << compare(games[i], guesses[i])[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}