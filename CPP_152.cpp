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
    
    // Additional code to get input from user
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> game(n), guess(n);
    cout << "Enter game elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> game[i];
    }
    
    cout << "Enter guess elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> guess[i];
    }

    vector<int> result = compare(game, guess);
    cout << "Result: ";
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl;
    
    return 0;
}