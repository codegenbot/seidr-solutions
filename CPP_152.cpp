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
    // Test case assertion
    assert(compare({1, 2, 3, 5}, {-1, 2, 3, 4}) == vector<int>({2, 0, 0, 1}));
    
    // User input for custom test cases
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> game(n), guess(n);
    
    cout << "Enter game vector elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> game[i];
    }
    
    cout << "Enter guess vector elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> guess[i];
    }
    
    vector<int> result = compare(game, guess);
    cout << "Difference vector: ";
    for(int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}