#include <iostream>
#include <vector>

bool issame(std::vector<int> b, std::vector<int> c) {
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != c[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(game[i]);
        }
    }
    return result;
}

int main() {
    std::vector<int> test1 = {1, 2, 3};
    std::vector<int> test2 = {1, 4, 3};
    std::vector<int> result = compare(test1, test2);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}