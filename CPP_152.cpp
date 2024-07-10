#include <vector>
#include <iostream>

using namespace std;

bool issame(vector<int> game, vector<int>) {
    for (int i = 0; i < game.size(); i++) {
        if (game[i] != i + 1) return false;
    }
    return true;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        int diff = abs(guess[i] - game[i]);
        if (diff == 0) {
            result.push_back(1);
        } else if (guess[i] > game[i]) {
            result.push_back(2);
        } else {
            result.push_back(3);
        }
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
        if (x != i + 1) {
            cout << "Invalid input. The number should be from 1 to " << n << endl;
            return -1;
        }
        game.push_back(x);
    }
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 1 || x > n) {
            cout << "Invalid input. The number should be from 1 to " << n << endl;
            return -1;
        }
        guess.push_back(x);
    }
    
    vector<int> res = compare(game, guess);
    if (!issame(game, guess)) {
        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Yes" << endl;
    }
    
    return 0;
}