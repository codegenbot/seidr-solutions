```cpp
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    int black = 0, white = 0;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i])
            black++;
        else if (std::count(guess.begin(), guess.end(), game[i]) > 0)
            white++;
        else
            white++;
    }
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i])
            result.push_back(2);
        else if (std::count(guess.begin(), guess.end(), game[i]) > 0)
            result.push_back(1);
        else
            result.push_back(0);
    }
    return result;
}