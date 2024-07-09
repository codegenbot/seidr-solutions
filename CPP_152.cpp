#include <iostream>
#include <vector>

bool issame(int a, int b) {
    if(a == b) {
        return true;
    }
    return false;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if(game[i] == guess[i]) {
            result.push_back(0);
        } else {
            int diff = abs(guess[i] - game[i]);
            if(diff == 1) {
                result.push_back(-1);
            } else if(diff > 1) {
                result.push_back(2);
            }
            else {
                result.push_back(1);
            }
        }
    }
    return result;
}

int main() {
    std::vector<int> game, guess;
    int n;
    std::cout << "Enter the size of the game: ";
    std::cin >> n;
    game.resize(n);
    guess.resize(n);

    for(int i = 0; i < n; i++) {
        std::cout << "Enter value for game[" << i << "]: ";
        std::cin >> game[i];
        std::cout << "Enter value for guess[" << i << "]: ";
        std::cin >> guess[i];
    }

    std::vector<int> output = compare(game, guess);

    for(int i = 0; i < n; i++) {
        std::cout << "Result for game[" << i << "] is: " << output[i] << "\n";
    }
    return 0;
}