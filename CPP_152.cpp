```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (guess[i] == game[i]) {
            result.push_back(2); // correct
        } else if (std::find(game.begin(), game.end(), guess[i]) != game.end()) {
            result.push_back(1); // in the game
        } else {
            result.push_back(0); // not in the game
        }
    }
    return result;
}