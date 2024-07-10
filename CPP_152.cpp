#include <vector>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else {
            bool inGame = false;
            for (int j = 0; j < game.size(); j++) {
                if (guess[i] == game[j] && i != j) {
                    inGame = true;
                    break;
                }
            }
            if (!inGame) {
                result.push_back(1);
            } else {
                result.push_back(0);
            }
        }
    }
    return result;
}