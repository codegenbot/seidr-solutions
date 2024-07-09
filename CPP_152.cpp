```cpp
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
        } else {
            int diff = abs(game[i] - guess[i]);
            if (game[i] > guess[i]) {
                diff++;
            }
            result.push_back(diff);
        }
    }
    return result;
}