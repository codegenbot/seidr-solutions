#include <vector>
#include <iostream>
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    // Count black pegs
    for(int i = 0; i < 4; ++i) {
        if(code[i] == guess[i]) {
            ++black;
            code[i] = ' '; // mark as used in the code
            guess[i] = ' '; // mark as used in the guess
        }
    }

    // Count white pegs
    for(int i = 0; i < 4; ++i) {
        int count = 0;
        for(int j = 0; j < 4; ++j) {
            if(code[j] == guess[i] && code[j] != ' ') {
                ++count;
            }
        }
        white += count > 1 ? 1 : (count > 0 ? 1 : 0);
    }

    return black + white;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << mastermind(code, guess) << endl;
    return 0;
}