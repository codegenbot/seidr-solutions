#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compareVect(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else {
            for (int j = 1; j <= 9; j++) {
                if (std::to_string(j) == std::to_string(guess[i]).substr(game[i] - j > 0 ? game[i] - j : j)) {
                    result.push_back(1);
                    break;
                }
                else if(std::to_string(j) == std::to_string(guess[i]).substr(game[i] + j, std::string::npos)) {
                    result.push_back(1);
                    break;
                }
            }
            result.push_back(std::abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    assert(issame(compareVect({1,2,3,5},{-1,2,3,4}),{2,1,1,1}));
    //...
}