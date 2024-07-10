#include <vector>
#include <algorithm>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}

bool issame(std::vector<int> game, std::vector<int>) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != i) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> game = {1, 2, 3};
    std::vector<int> guess = {1, 3, 2};
    
    std::vector<int> result = compare(game, guess);
    
    if (issame(game, guess)) {
        for (int i : result) {
            std::cout << i;
        }
        std::cout << std::endl;
    } else {
        for (int i : result) {
            std::cout << i;
        }
        std::cout << std::endl;
    }
    
    return 0;
}