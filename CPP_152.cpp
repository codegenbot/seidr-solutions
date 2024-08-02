#include <vector>
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (size_t i = 0; i < game.size(); i++) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    vector<int> game = {1, 2, 3, 5};
    vector<int> guess = {-1, 2, 3, 4};
    
    assert(compare(game, guess) == vector<int>{2, 0, 0, 1});
    
    return 0;
}