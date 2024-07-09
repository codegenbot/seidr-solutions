```cpp
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
    std::vector<int> game, guess;

    int n;
    std::cout << "Enter the number of games: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter game number " << i + 1 << ": ";
        std::cin >> x;
        game.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int y;
        std::cout << "Enter guess for game number " << i + 1 << ": ";
        std::cin >> y;
        guess.push_back(y);
    }

    std::vector<int> output = compare(game, guess);

    std::cout << "The result is: ";
    for (int i = 0; i < n; i++) {
        if (output[i] == 0)
            std::cout << "C";
        else
            std::cout << output[i];
    }
    std::cout << std::endl;

    return 0;
}