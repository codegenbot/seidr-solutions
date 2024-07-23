#include <vector>
#include <algorithm>

bool same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(std::abs(game[i] - guess[i]));
        }
    }
    return result;
}

int testMain() {
    assert(same(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    return 0;
}