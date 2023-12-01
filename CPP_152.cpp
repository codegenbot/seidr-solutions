#include <iostream>
#include <vector>

vector<int> compare(vector<int> game, vector<int> guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

int main() {
    vector<int> game = {1, 2, 3, 5};
    vector<int> guess = {-1, 2, 3, 4};
    vector<int> result = compare(game, guess);
    
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    
    return 0;
}