#include <vector>
#include <algorithm>

bool issame(vector<int> game, vector<int> guess) {
    for(int i = 0; i < game.size(); i++) {
        if(game[i] != guess[i]) return false;
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for(int i = 0; i < game.size(); i++) {
        if(game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(guess[i] - game[i]));
        }
    }
    return result;
}

int main() {
    vector<int> game, guess;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(i == 0) game.push_back(x);
        else guess.push_back(x);
    }
    if(issame(game, guess)) cout << "Yes\n";
    else {
        vector<int> res = compare(game, guess);
        for(int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}