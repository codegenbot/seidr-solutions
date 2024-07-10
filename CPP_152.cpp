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
    std::vector<int> result;
    for(int i = 0; i < game.size(); i++) {
        if(game[i] == guess[i]) {
            result.push_back(0);
        } else if (abs(guess[i] - game[i]) <= 1) {
            result.push_back(1);
        } else {
            result.push_back(2);
        }
    }
    return result;
}

int main() {
    std::vector<int> game = {1, 2, 3};
    std::vector<int> guess = {1, 3, 4};
    for (int i : compare(game, guess)) {
        assert(i == 0 || i == 1 || i == 2);
    }
    return 0;
}