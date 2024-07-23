```
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    return compareVect(game, guess);
}

std::vector<int> compareVect(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2); // correct number in the same position
        } else if (std::find(game.begin(), game.end(), guess[i]) != game.end()) {
            result.push_back(1); // correct number but not in the same position
        } else {
            result.push_back(0); // incorrect number
        }
    }
    return result;
}

int main() {
    std::vector<int> game = {1,2,3,5};
    std::vector<int> guess = {-1,2,3,4};
    for (int i : compare(game,guess)) {
        std::cout << i << " ";
    }
}