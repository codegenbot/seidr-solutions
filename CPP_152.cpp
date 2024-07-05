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
    
    // For interactive user inputs and outputs
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> game(n), guess(n);
    cout << "Enter game elements: ";
    for (int &x : game) {
        cin >> x;
    }

    cout << "Enter guess elements: ";
    for (int &x : guess) {
        cin >> x;
    }

    vector<int> result = compare(game, guess);
    cout << "Resultant differences: ";
    for (const int &x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}