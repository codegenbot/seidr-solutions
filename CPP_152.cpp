#include <iostream>
#include <vector>
#include <cassert>

bool issame(int a, int b){
    return a == b;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess){
    std::vector<int> result;
    for(int i=0; i<game.size(); i++){
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

int main(){
    std::vector<int> game = {1, 2, 3};
    std::vector<int> guess = {2, 4, 6};
    
    std::vector<int> result = compare(game, guess);
    
    assert(result.size() == game.size());
    for(int i=0; i<result.size(); i++){
        assert(issame(result[i], guess[i] - game[i]));
    }
    
    return 0;
}