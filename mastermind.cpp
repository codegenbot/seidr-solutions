#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count correct colors
    vector<int> color_count(6, 0);
    for (char c : guess) {
        color_count[c-'0']++;
    }
    
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            black++;
        } else {
            white += color_count[guess[i]] - (black > 0);
        }
    }
    
    return black + white;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}