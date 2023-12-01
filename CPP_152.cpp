#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(std::vector<int> game, std::vector<int> guess){
    std::vector<int> result;
    if (game.size() != guess.size()) {
        // handle the case where sizes are not equal
        return result;
    }
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
    assert(issame(result, {1, 2, 3})); // update the expected values

    return 0;
}