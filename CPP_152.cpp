#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    assert(equal(compare({1,2,3,5},{-1,2,3,4}).begin(),compare({1,2,3,5},{-1,2,3,4}).end(),0) &&
           equal((compare({1,2,3,5},{-1,2,3,4})).rbegin(),(compare({1,2,3,5},{-1,2,3,4})).rend(),0));
    return 0;
}