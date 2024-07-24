#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
        std::vector<int> result;
        for (int i = 0; i < game.size(); ++i) {
            result.push_back(abs(game[i] - guess[i]));
        }
        return result;
    }

    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
    return 0;
}