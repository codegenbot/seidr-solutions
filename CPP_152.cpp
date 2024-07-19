#include <vector>
#include <initializer_list>

std::vector<int> gameCompare(std::vector<int> game, std::vector<int> guess) {
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
    
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        game.push_back(num);
    }
    
    std::vector<int> guess;
    std::cout << "Enter the number of elements in the guess: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        guess.push_back(num);
    }
    
    std::vector<int> output = gameCompare(game, guess);
    for (int i = 0; i < output.size(); i++) {
        std::cout << output[i] << " ";
    }
    return 0;
}