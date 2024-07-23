```cpp
#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> compare(const vector<int>& game, const vector<int>& guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (game[i] == guess[i]) {
            result.push_back(0);
        } else {
            result.push_back(abs(game[i] - guess[i]));
        }
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> game(n), guess(k);
    for (int i = 0; i < n; i++) {
        cin >> game[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> guess[i];
    }
    if (!issame(game, guess)) {
        cout << "Incorrect\n";
    } else {
        vector<int> output = compare(game, guess);
        for (int i = 0; i < game.size(); i++) {
            if (output[i] == 0)
                cout << "bull" << endl;
            else
                cout << output[i] << " cow" << endl;
        }
    }
    return 0;
}