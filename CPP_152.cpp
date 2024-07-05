#include <vector>
#include <cmath>
#include <cassert>
#include <iostream>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> game(n), guess(n);
    for (int i = 0; i < n; ++i) {
        cin >> game[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> guess[i];
    }
    vector<int> result = compare(game, guess);
    for (int r : result) {
        cout << r << " ";
    }
    cout << endl;
    return 0;
}