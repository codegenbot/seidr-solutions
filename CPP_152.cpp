#include <iostream>
#include <vector>

bool issame(vector<int> game, vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i])
            return false;
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    int white = 0;
    int black = 0;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i])
            white++;
        else if (abs(game[i] - guess[i]) <= 1)
            black++;
        else
            continue;
    }
    vector<int> result({white, black});
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> game(n);
    for (int i = 0; i < n; i++)
        cin >> game[i];
        
    vector<int> guess(n);
    for (int i = 0; i < n; i++)
        cin >> guess[i];
        
    if (!issame(game, guess)) {
        cout << "Invalid Guess" << endl;
        return 1;
    }
    
    vector<int> res = compare(game, guess);
    cout << "White: " << res[0] << ", Black: " << res[1] << endl;
    
    return 0;
}