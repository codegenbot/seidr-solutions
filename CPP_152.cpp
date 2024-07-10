#include <vector>
#include <iostream>

using namespace std;

bool issame(vector<int> game, vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) {
            return false;
        }
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

int main() {
    vector<int> game, guess;
    cout << "Enter the number of rounds: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter score for round " << i + 1 << ": ";
        int x, y;
        cin >> x >> y;
        game.push_back(x);
        guess.push_back(y);
    }
    
    vector<int> diff = compare(game, guess);

    if (issame(game, guess)) {
        cout << "The scores are the same." << endl;
    } else {
        cout << "The different between scores is: ";
        for (int i = 0; i < n; i++) {
            cout << diff[i] << " ";
        }
        cout << endl;
    }

    return 0;
}