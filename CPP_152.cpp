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
        } else {
            int diff = abs(guess[i] - game[i]);
            if (issame(diff, 0)) {
                result.push_back(2);
            } else if (diff == 1) {
                result.push_back(1);
            } else {
                result.push_back(-1);
            }
        }
    }
    return result;
}

int main() {
    std::vector<int> game = {1, 5, 4};
    std::vector<int> guess = {1, 5, -1};
    for (int i : compare(game, guess)) {
        std::cout << i << " ";
    }
    return 0;
}