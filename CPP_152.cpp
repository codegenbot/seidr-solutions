#include <vector>
#include <cmath>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> compare(std::initializer_list<int> game, std::initializer_list<int> guess) {
    std::vector<int> result(game.size());
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result[i] = 0;
        } else {
            result[i] = std::abs(game[i] - guess[i]);
        }
    }
    return result;
}

int main() {
    assert(compare({1,2,3,5},{-1,2,3,4}) == {2,0,0,1});
}