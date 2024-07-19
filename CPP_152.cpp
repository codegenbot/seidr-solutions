#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> compare(std::vector<int>& game, std::vector<int>& guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else if (std::count(game.begin(), game.end(), guess[i]) > 0) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}

int main() {
    std::vector<int> game;
    int n;
    std::cout << "Enter the number of elements in the game: ";
    std::cin >> n;
    game.resize(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> game[i];
    }
    
    std::vector<int> guess;
    int m;
    std::cout << "Enter the number of elements in the guess: ";
    std::cin >> m;
    guess.resize(m);
    for (int i = 0; i < m; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> guess[i];
    }
    
    std::vector<int> output = compare(game, guess);
    for (int i = 0; i < output.size(); i++) {
        std::cout << output[i] << " ";
    }
    return 0;
}