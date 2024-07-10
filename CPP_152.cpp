#include <vector>
#include <iostream>

bool issame(int a, int b) {
    return (a == b);
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for(int i = 0; i < game.size(); i++) {
        if(issame(game[i], guess[i])) {
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
    std::cout << "Enter number of rounds: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::cout << "Enter score for round " << (i+1) << ": ";
        std::cin >> game[i] >> guess[i];
    }
    
    std::vector<int> output = compare(game, guess);
    
    for(int i : output) {
        std::cout << i << " ";
    }
    return 0;
}