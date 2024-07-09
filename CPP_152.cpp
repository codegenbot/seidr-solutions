#include <vector>
#include <cassert>

std::vector<int> compare(const std::vector<int>& game, const std::vector<int>& guess) {
    std::vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(std::abs(game[i] - guess[i]));
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    auto result = compare({1, 2, 3, 5}, {-1, 2, 3, 4});
    assert(result[0] == 2);
    assert(result[1] == 0);
    assert(result[2] == 0);
    assert(result[3] == 1);
    return 0;
}