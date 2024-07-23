#include <vector>
#include <cmath>

bool std::vector<int>::operator==(const std::vector<int>& b) {
    return *this == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    return compareVect(game, guess);
}

std::vector<int> compareVect(const std::vector<int>& game, const std::vector<int>& guess) {
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
    assert(compare({1,2,3,5},{-1,2,3,4}) == std::vector<int>({2,0,0,1}));
}