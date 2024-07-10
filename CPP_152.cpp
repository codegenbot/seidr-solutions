#include <vector>
#include <algorithm>

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        int diff = abs(guess[i] - game[i]);
        result.push_back(diff);
    }
    return result;
}

bool issame(vector<int> game, vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> game(n);
    for (int i = 0; i < n; i++) {
        cin >> game[i];
    }
    
    vector<int> guess(n);
    for (int i = 0; i < n; i++) {
        cin >> guess[i];
    }
    
    vector<int> diff = compare(game, guess);
    if (issame(game, guess)) {
        cout << "Game and Guess are the same.\n";
    } else {
        cout << "The differences between game and guess are ";
        for (int i = 0; i < n; i++) {
            cout << diff[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}