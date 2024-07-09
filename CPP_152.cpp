```cpp
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else if ((a % 10) == (b % 10))
        return false;
    else
        return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    int black = 0, white = 0;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i])
            continue;
        else if (issame(game[i], guess[i]))
            white++;
        else
            black++;
    }
    std::vector<int> result({black, white});
    return result;
}