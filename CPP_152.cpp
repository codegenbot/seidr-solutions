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
        if (issame(game[i], guess[i]))
            result.push_back(0);
        else
            result.push_back(abs(guess[i] - game[i]));
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of games: ";
    std::cin >> n;

    std::vector<int> game(n), guess(n);

    for (int i = 0; i < n; i++) {
        std::cout << "Game and Guess values for game # " << i + 1 << ": ";
        std::cin >> game[i] >> guess[i];
    }

    std::vector<int> result = compare(game, guess);

    std::cout << "Result: ";
    for (int i : result)
        std::cout << i << " ";

    return 0;
}