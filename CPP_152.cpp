#include <iostream>
#include <vector>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(guess[i] - game[i]));
        }
    }
    return result;
}

int main() {
    vector<int> game = {1, 2, 3, 5};
    vector<int> guess = {-1, 2, 3, 4};
    vector<int> expected = {2, 0, 0, 1};
    
    if (compare(game, guess) != expected) {
        cout << "Test failed";
    } else {
        cout << "Test passed";
    }
    
    return 0;
}