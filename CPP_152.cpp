#include <iostream>
#include <vector>

using namespace std;

bool issame(int a, int b) {
    return a == b;
}

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (int i = 0; i < game.size(); i++) {
        if (issame(game[i], guess[i])) {
            result.push_back(0);
        } else if (game[i] > guess[i]) {
            result.push_back(1);
        } else {
            result.push_back(-1);
        }
    }
    return result;
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
    
    vector<int> output = compare(game, guess);
    
    for (int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
    
    return 0;
}