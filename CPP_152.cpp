```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> game, vector<int> guess) {
    for(int i = 0; i < game.size(); i++) {
        if(game[i] != guess[i]) {
            return false;
        }
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
        int val;
        cin >> val;
        game.push_back(val);
    }
    
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        guess.push_back(val);
    }

    if(issame(game, guess)) {
        cout << "Yes" << endl;
    } else {
        vector<int> res = compare(game, guess);
        for(int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}