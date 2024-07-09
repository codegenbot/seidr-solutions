```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> result = compare({1,2,3,5},{-1,2,3,4});
    for (auto i : result) {
        std::cout << i << " ";
    }
    return 0;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    bool correct = true;
    assert(result.size() == game.size());
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) {
            correct = false;
        }
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}