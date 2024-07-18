#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    std::transform(game.begin(), game.end(), guess.begin(), std::back_inserter(result),
                   [](int a, int b) { return std::abs(a - b); });
    return result;
}

int main(int argc, char *argv[]) {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
    return 0;
}