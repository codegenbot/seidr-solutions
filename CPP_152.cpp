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

    // Read the game and guess from user
    int n;
    std::cout << "Enter the number of rounds: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int temp1, temp2;
        std::cout << "Enter the score for round " << i + 1 << ": ";
        std::cin >> temp1 >> temp2;
        game.push_back(temp1);
        guess.push_back(temp2);
    }

    // Call the compare function
    std::vector<int> result = compare(game, guess);

    // Print the result
    for (int i = 0; i < n; i++) {
        std::cout << "Round " << i + 1 << ": ";
        if (result[i] == 0)
            std::cout << "Match\n";
        else
            std::cout << "Difference: " << result[i] << "\n";
    }

    return 0;
}