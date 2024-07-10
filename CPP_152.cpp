```cpp
#include <vector>
#include <algorithm>

bool issame(int x, int y) {
    return x == y;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for(int i = 0; i < game.size(); i++) {
        if(issame(game[i], guess[i])) {
            result.push_back(0);
        } else {
            int diff = abs(guess[i] - game[i]);
            if(diff == 1) {
                result.push_back(2);
            } else {
                result.push_back(1);
            }
        }
    }
    return result;
}

int main() {
    std::vector<int> game = {8, 15, 20, 24, 25};
    std::vector<int> guess = {8, 15, 20, 22, 25};
    std::vector<int> res = compare(game, guess);
    for(int i = 0; i < res.size(); i++) {
        assert(res[i] == 0 || res[i] == 1 || res[i] == 2);
    }
    return 0;
}