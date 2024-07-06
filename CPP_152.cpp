```
#include <vector>
#include <algorithm>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else {
            for (int j = 1; j <= 6; j++) {
                if (std::count(guess.begin(), guess.end(), j) > 0 && std::count(game.begin(), game.end(), j) == 1)
                    result.push_back(j);
            }
        }
    }
    return result;
}