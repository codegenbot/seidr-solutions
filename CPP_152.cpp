```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) { 
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

int mainFunction() {
    std::vector<int> game;
    int n;
    std::cout << "Enter the number of elements in the game: ";
    std::cin >> n;
    
    std::vector<int> gameInput;
    std::cout << "Enter elements for the game: ";
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        gameInput.push_back(temp);
    }
    game = gameInput;
    
    std::vector<int> guess;
    int m;
    std::cout << "Enter the number of elements in the guess: ";
    std::cin >> m;
    
    std::vector<int> guessInput;
    std::cout << "Enter elements for the guess: ";
    for (int i = 0; i < m; i++) {
        int temp;
        std::cin >> temp;
        guessInput.push_back(temp);
    }
    guess = guessInput;
    
    if (!issame(game, guess)) {
        std::cout << "The game and the guess are not the same. Please try again." << std::endl;
        return 0;
    }
    
    std::vector<int> output = compare(game, guess);
    for (int i = 0; i < output.size(); i++) {
        std::cout << output[i] << " ";
    }
    return 0;
}