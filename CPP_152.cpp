#include <vector>
#include <cassert>

bool issame(int a, int b) {
    return a == b;
}

vector<int> compare(vector<int> game,vector<int> guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

int main() {
    vector<int> game = {3, 7, 5};
    vector<int> guess = {4, 7, 3};
    
    vector<int> result = compare(game, guess);
    
    assert(issame(result[0], 1));
    assert(issame(result[1], 0));
    assert(issame(result[2], 2));
    
    return 0;
}