#include <vector>
#include <iostream>
#include <string>

using namespace std;

int solve(string mastermindCode, string guess) {
    int white = 0;
    int black = 0;
    
    for(int i = 0; i < 4; i++) {
        if(mastermindCode[i] == guess[i]) {
            black++;
            mastermindCode[i] = 'X';
            guess[i] = 'X';
        }
    }

    for(int i = 0; i < 4; i++) {
        int count = 0;
        for(int j = 0; j < 4; j++) {
            if(mastermindCode[j] == guess[i]) {
                count++;
            }
        }
        if(count > 1) continue;
        if(count == 1 && mastermindCode[i] != 'X') white++;
    }

    return make_pair(white, black).second;
}

int main() {
    string mastermindCode;
    cout << "Enter the Mastermind code: ";
    cin >> mastermindCode;

    string guess;
    cout << "Enter a guess: ";
    cin >> guess;

    int result = solve(mastermindCode, guess);

    if(result == 0) cout << "0\n4";
    else if(result > 0 && result < 4) cout << to_string(result) << "\n0";
    else cout << "0\n" << to_string(result);
    
    return 0;
}