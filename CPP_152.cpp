#include <iostream>
#include <vector>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
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
    int n, m;
    std::cout << "Enter the number of rounds: ";
    std::cin >> n;
    std::vector<int> game(n), guess(n);
    
    for (int i = 0; i < n; i++) {
        std::cout << "Enter game[" << i << "] and guess[" << i << "]: ";
        std::cin >> game[i] >> guess[i];
    }
    
    std::vector<int> result = compare(game, guess);
    for (int i = 0; i < n; i++) {
        std::cout << "Result[" << i << "] = " << result[i] << "\n";
    }
    
    return 0;
}