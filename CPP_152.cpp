#include <iostream>
#include <vector>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            std::cout << "Matched number: " << game[i] << std::endl;
        } else {
            std::cout << "Mismatched number: " << game[i] << ", Actual: " << guess[i] << std::endl;
        }
    }
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> game(n);
    for (auto &i : game) {
        std::cin >> i;
    }

    int m;
    std::cin >> m;

    std::vector<int> guess(m);
    for (auto &i : guess) {
        std::cin >> i;
    }

    compare(game, guess);

    return 0;
}