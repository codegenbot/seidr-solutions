#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else {
            int num = 0;
            for (int j = 0; j < game.size(); j++) {
                if (game[j] != guess[j])
                    num++;
                if (num > 1) break;
            }
            if (num == 1)
                result.push_back(1);
            else
                result.push_back(0);
        }
    }
    return result;
}