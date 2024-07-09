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
            int diff = abs(guess[i] - game[i]);
            result.push_back(diff);
        }
    }
    return result;
}

int main() {
    std::vector<int> game, guess;
    
    // Input for game and guess
    int n;
    std::cout << "Enter the number of rounds: ";
    std::cin >> n;
    
    cout << "Enter the numbers for game: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        game.push_back(num);
    }
    
    cout << "Enter the numbers for guess: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        guess.push_back(num);
    }
    
    // Compare and print
    std::vector<int> res = compare(game, guess);
    cout << "The result is: ";
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}