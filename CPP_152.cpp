#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

bool isequal(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> compare(const vector<int>& game, const vector<int>& guess){
    vector<int> result;
    for(size_t i = 0; i < game.size(); i++){
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}