#include <iostream>
#include <vector>
#include <cassert> 
#include <cmath>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

// Testing the implementation provided in the main function
int main() {
    assert(issame(compare({1,2,3,5}, {-1,2,3,4}), {2,0,0,1}));
    return 0;
}