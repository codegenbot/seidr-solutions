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
        } else if (std::find(game.begin(), game.end(), guess[i]) != game.end()) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}

int main() {
    assert(isSame(compareVect({1,2,3,5},{-1,2,3,4}),{2,1,1,1}));
    std::cout << "Comparison vector: ";
    for (int i : compareVect({1,2,3,5},{-1,2,3,4})) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}