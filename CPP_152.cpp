#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    std::vector<int> game(game.begin(), game.end());
    std::vector<int> guess(guess.begin(), guess.end());
    assert(issame(compare(game,{-1,2,3,4}),{2,0,0,1}));
    return 0;
}