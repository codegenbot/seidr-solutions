#include <vector>
#include <cassert>
#include <cmath>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess){
    std::vector<int> result;
    for(int i = 0; i < game.size(); i++){
        result.push_back(std::abs(game[i] - guess[i]));
    }
    return result;
}