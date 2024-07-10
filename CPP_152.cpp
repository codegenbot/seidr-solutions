#include <vector>
#include <iostream>

using namespace std;

bool issame(vector<int> game, vector<int> guess) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != guess[i]) return false;
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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        game.push_back(x);
        cin >> x;
        guess.push_back(x);
    }
    if (issame(game, guess)) cout << "Game and Guess are same" << endl;
    else {
        vector<int> res = compare(game, guess);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}