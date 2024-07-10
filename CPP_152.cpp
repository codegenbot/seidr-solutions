#include <vector>
#include <algorithm>

bool std::issame(std::vector<int> game, std::vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result(game.size());
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result[i] = 0;
        } else {
            result[i] = abs(game[i] - guess[i]);
        }
    }
    return result;