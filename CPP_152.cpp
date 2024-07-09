#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(2);
        } else if (abs(game[i] - guess[i]) == 1) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    
    return result;
}