#include <vector>
#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count the number of correct colors in the wrong place
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' '; // mark this position as visited
            guess[i] = ' '; // mark this position as visited
        }
    }
    
    // Count the number of correct colors in the right place
    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (code[j] == guess[i] && code[j] != ' ') {
                code[j] = ' '; // mark this position as visited
                found = true;
                break;
            }
        }
        if (found) white++;
    }
    
    return black, white;
}

int main() {
    string code;
    cin >> code;
    string guess;
    cin >> guess;
    int black, white;
    tie(black, white) = mastermind(code, guess);
    cout << black << endl;
    cout << white << endl;
    return 0;
}