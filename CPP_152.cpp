#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return (a == b);
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (issame(game[i], guess[i])) {
            result.push_back(0);
        } else if (game[i] > guess[i]) {
            result.push_back(1);
        } else {
            result.push_back(-1);
        }
    }
    return result;
}