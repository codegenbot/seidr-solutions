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

int solve() {
    int n;
    cin >> n;
    vector<int> game(n);
    vector<int> guess(n);

    for(int i=0; i<n; i++){
        cin >> game[i];
    }
    for(int i=0; i<n; i++){
        cin >> guess[i];
    }

    vector<int> result = compare(game, guess);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}