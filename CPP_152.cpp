#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<int> compare(const vector<int>& game, const vector<int>& guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}