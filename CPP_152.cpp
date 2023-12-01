#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> compare(vector<int> game, vector<int> guess);

int main() {
    vector<int> game = {3, 7, 5};
    vector<int> guess = {4, 7, 3};
    
    vector<int> result = compare(game, guess);
    
    assert(issame(result, {1, 0, 2}));
    
    return 0;
}

vector<int> compare(vector<int> game, vector<int> guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}