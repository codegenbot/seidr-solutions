#include <vector>
#include <algorithm>
#include <iostream>

bool isSame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(std::abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    std::vector<int> expected = compare({1,2,3,5},{-1,2,3,4});
    for (int i : expected) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}