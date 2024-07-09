#include <iostream>
#include <vector>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

int main() {
    vector<int> game, guess;
    
    cout << "Enter the number of rounds: ";
    int n; cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Enter score for round " << i+1 << ": ";
        int x; cin >> x;
        game.push_back(x);
        
        cout << "Enter guess for round " << i+1 << ": ";
        int y; cin >> y;
        guess.push_back(y);
    }
    
    vector<int> result = compare(game, guess);

    cout << "\n";
    for (int i = 0; i < n; i++) {
        if (issame(game[i], guess[i]))
            cout << "Same: " << game[i] << endl;
        else
            cout << "Different: " << game[i] << " vs. " << guess[i] << endl;
    }
    
    return 0;
}

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