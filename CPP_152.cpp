#include <vector>
#include <iostream>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

int main() {
    std::vector<int> game;
    std::vector<int> guess;

    for (int i = 0; i < 4; i++) {
        int temp;
        std::cin >> temp;
        game.push_back(temp);
        std::cin >> temp;
        guess.push_back(temp);
    }

    std::vector<int> result = compare(game, guess);

    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
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