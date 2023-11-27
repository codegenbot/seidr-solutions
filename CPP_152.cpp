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
    // Read the size of the game array
    int n;
    cin >> n;

    // Read the game array
    vector<int> game(n);
    for(int i=0; i<n; i++){
        cin >> game[i];
    }

    // Read the guess array
    vector<int> guess(n);
    for(int i=0; i<n; i++){
        cin >> guess[i];
    }

    // Call the compare function
    vector<int> result = compare(game, guess);

    // Print the result
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}