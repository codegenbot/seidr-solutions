#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

std::vector<int> compare(std::vector<int> game, std::vector<int> guess);

std::vector<int> compare(std::vector<int> game, std::vector<int> guess){
    std::vector<int> result;
    for(int i=0; i<game.size(); i++){
        int diff = std::abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

int main() {
    std::vector<int> game = {3, 7, 5};
    std::vector<int> guess = {4, 7, 3};
    
    std::vector<int> result = compare(game, guess);
    
    assert(issame(result, std::vector<int>{1, 0, 2}));
    
    return 0;
}