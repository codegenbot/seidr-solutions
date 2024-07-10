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
        if (issame({game[i], guess[i]}, {game[i], game[i]}) || issame({guess[i], game[i]}, {game[i], game[i]})) {
            result.push_back(1);
        } else if (abs(guess[i] - game[i]) == 1) {
            result.push_back(2);
        } else {
            result.push_back(0);
        }
    }
    return result;
}