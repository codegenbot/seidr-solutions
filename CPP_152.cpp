#include <vector>
#include <iostream>

bool issame(int a, int b) {
    if(a == b)
        return true;
    else
        return false;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for(int i = 0; i < game.size(); i++) {
        if(game[i] == guess[i]) {
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
    
    for(int i = 0; i < n; i++) {
        std::cout << "Enter score for round " << (i+1) << ": ";
        std::cin >> game.push_back(guess).back();
    }
    
    if(issame(game.size(), guess.size())) {
        for(int i = 0; i < game.size(); i++) {
            if(game[i] > guess[i])
                std::cout << "Win in round " << (i+1) << std::endl;
            else if(game[i] < guess[i])
                std::cout << "Lose in round " << (i+1) << std::endl;
            else
                std::cout << "Tie in round " << (i+1) << std::endl;
        }
    } else {
        std::cout << "Games and guesses must be the same length." << std::endl;
    }
    
    return 0;
}