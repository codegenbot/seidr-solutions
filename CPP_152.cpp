```cpp
#include <vector>
#include <iostream>

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
    std::vector<int> game, guess;
    int n;
    std::cout << "Enter the number of rounds: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter your guess for round " << i + 1 << ": ";
        std::cin >> x;
        game.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter the actual number for round " << i + 1 << ": ";
        std::cin >> x;
        guess.push_back(x);
    }
    std::vector<int> output = compare(game, guess);
    for (int i : output) {
        std::cout << i << " ";
    }
    return 0;
}