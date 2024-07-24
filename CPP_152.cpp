#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess) {
    std::vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        result.push_back(std::abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    assert (issame(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
}