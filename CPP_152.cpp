#include <vector>
#include <algorithm>

int issame(int a, int b) {
    if (a == b)
        return 1;
    else
        return -1;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(1);
        } else {
            int comp = issame(game[i], guess[i]);
            if (comp > 0)
                result.push_back(0);
            else
                result.push_back(-comp);
        }
    }
    return result;
}