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
    cout << "The comparison is: ";
    for (int i : compare(game, guess)) {
        cout << i << " ";
    }
    return 0;
}