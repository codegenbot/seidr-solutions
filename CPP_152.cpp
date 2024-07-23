#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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

int main() {
    std::vector<int> expected = {2, 0, 0, 1};
    std::vector<int> actual = compare({1, 2, 3, 5}, {-1, 2, 3, 4});
    if (!issame(actual, expected)) {
        // handle the case where actual and expected are not the same
    }
}