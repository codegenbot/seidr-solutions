#include <bits/stdc++.h>
using namespace std;
bool issame(int a, int b) {
    if(a == b)
        return true;
    else 
        return false;
}
vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if(issame(game[i],guess[i])){
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}