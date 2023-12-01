#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<int> compare(const vector<int>& game, const vector<int>& guess) {
    vector<int> result;
    for(int i=0; i<game.size(); i++) {
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

int main() {
    vector<int> game = {3, 7, 5};
    vector<int> guess = {4, 7, 3};
    
    vector<int> result = compare(game, guess);
    
    assert(result == vector<int>{1, 0, 2});
    
    return 0;
}