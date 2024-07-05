#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

vector<int> compare(vector<int> game, vector<int> guess) {
    vector<int> result;
    for (size_t i = 0; i < game.size(); ++i) {
        result.push_back(abs(game[i] - guess[i]));
    }
    return result;
}

int main() {
    vector<int> game, guess;
    int n, temp;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        game.push_back(temp);
    }

    for (int i = 0; i < n; ++i) {
        cin >> temp;
        guess.push_back(temp);
    }

    vector<int> result = compare(game, guess);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}