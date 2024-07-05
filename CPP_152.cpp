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
    // Test case to confirm the function works correctly
    assert(compare({1, 2, 3, 5}, {-1, 2, 3, 4}) == vector<int>({2, 0, 0, 1}));

    // Taking input from the user
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> game(n), guess(n);
    cout << "Enter the elements of the game vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> game[i];
    }

    cout << "Enter the elements of the guess vector: ";
    for (int i = 0; i < n; ++i) {
        cin >> guess[i];
    }

    vector<int> result = compare(game, guess);

    cout << "Result vector: ";
    for (int el : result) {
        cout << el << " ";
    }
    cout << endl;

    return 0;
}