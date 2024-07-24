#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // count correct colors in wrong place
    vector<int> colorCount(6, 0);
    for (char c : code) {
        colorCount[c - 'A']++;
    }
    for (int i = 0; i < 4; i++) {
        char c = guess[i];
        if (c != code[i] && colorCount[c - 'A']) {
            white++;
            colorCount[c - 'A']--;
        }
    }
    
    // count correct colors in correct place
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            black++;
        }
    }
    
    return {black, white};
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int result[] = mastermind(code, guess);
    cout << result[0] << endl;
    cout << result[1] << endl;
    return 0;
}