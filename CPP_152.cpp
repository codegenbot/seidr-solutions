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
    assert(compare({1, 2, 3, 5}, {-1, 2, 3, 4}) == vector<int>({2, 0, 0, 1}));
    vector<int> game, guess;
    int n, value;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter game elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        game.push_back(value);
    }
    cout << "Enter guess elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        guess.push_back(value);
    }
    vector<int> result = compare(game, guess);
    cout << "Result: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}