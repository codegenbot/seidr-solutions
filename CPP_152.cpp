#include <vector>
#include <iostream>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

bool issame(vector<int> game, vector<int> guess) {
    bool same = true;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) {
            same = false;
            break;
        }
    }
    return same;
}

int main() {
    int n;
    cin >> n;
    vector<int> game(n);
    for (auto &x : game) {
        cin >> x;
    }
    vector<int> guess(n);
    for (auto &x : guess) {
        cin >> x;
    }
    
    vector<int> result = compare(game, guess);
    bool same = issame(game, guess);
    
    cout << "Result: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    if (same) {
        cout << "Guess is the same as game." << endl;
    } else {
        cout << "Guess is not the same as game." << endl;
    }
    
    return 0;
}