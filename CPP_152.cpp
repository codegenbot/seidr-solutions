```cpp
#include <vector>
#include <algorithm>
#include <iostream>

bool isSame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
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
    assert(isSame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    std::cout << "The output is: ";
    for (auto val : compare({1,2,3,5},{-1,2,3,4})) {
        std::cout << val << " ";
    }
    return 0;
}