#include <vector>
#include <algorithm>

bool sameGameGuess(std::vector<int> game, std::vector<int> guess) {
    bool issame = (game == guess);
    return issame;
}