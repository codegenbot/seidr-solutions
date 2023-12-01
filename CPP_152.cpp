#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> compare(std::vector<int> game, std::vector<int> guess);

std::vector<int> compare(std::vector<int> game, std::vector<int> guess){
    std::vector<int> result;
    for(int i=0; i<game.size(); i++){
        int diff = std::abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}