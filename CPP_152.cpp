#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool issame(int a, int b) {
    if(a == b)
        return true;
    else
        return false;
}

int compare(int a, int b) {
    if(a > b)
        return 1;
    else if(a < b)
        return -1;
    else
        return 0;
}

vector<int> getResult(vector<int> game, vector<int> guess) {
    vector<int> res;
    for(int i = 0; i < game.size();i++){
        if(issame(game[i],guess[i]))
            res.push_back(2);
        else if(compare(game[i],guess[i]) == 1)
            res.push_back(1);
        else
            res.push_back(0);
    }
    return res;
}

void testGame() {
    int n;
    cin >> n;
    vector<int> game(n), guess(n);
    for(int i = 0; i < n;i++){
        cin >> game[i] >> guess[i];
    }
    vector<int> res = getResult(game,guess);
    if(res.size() != n) {
        cout << "Error: Invalid input. Please check your input again." << endl;
    } else {
        for(auto x:res)cout << x << " ";
        cout << endl; 
    }
    
    vector<int> testGame = {1,2,3,5};
    vector<int> testGuess = {-1,2,3,4};
    int result = compare(testGame[0],testGuess[0]);
    for(int i = 1; i < testGame.size();i++){
        if(issame(testGame[i],testGuess[i]))
            continue;
        else if(result == 1)
            assert(compare(testGame[i],testGuess[i]) == -1);
        else
            assert(result == compare(testGame[i],testGuess[i]));
    }
    
    return;
}

int main() {
    testGame();
    return 0;
}