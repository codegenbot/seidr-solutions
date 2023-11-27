#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> compare(vector<int> game, vector<int> guess){
    vector<int> result;
    for(int i=0; i<game.size(); i++){
        if(game[i] == guess[i]){
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    // Test the compare function
    vector<int> game = {1, 2, 3};
    vector<int> guess = {1, 4, 3};
    vector<int> result = compare(game, guess);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}