#include <vector>
#include <initializer_list>
#include <bits/stl_pair.h>

bool issame(vector<int> game, vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) {
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result(game.size());
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result[i] = 0;
        } else {
            result[i] = abs(game[i] - guess[i]);
        }
    }
    return result;
}

int main() {
    vector<int> game = {1,2,3};
    vector<int> guess = {1,4,5};
    cout << issame(game,guess) << endl; 
    cout << "Guess: ";
    for (int i : guess) {
        cout << i << " ";
    }
    cout << endl;
    cout << "Result: ";
    for (int i : compare(game,guess)) {
        cout << i << " ";
    }
    cout << endl;
}