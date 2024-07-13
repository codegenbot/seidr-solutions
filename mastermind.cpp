#include <iostream>
#include <map>
#include <string>

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return 4 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeCount;
    for (int i = 0; i < 4; i++) {
        codeCount[code[i]]++;
    }
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codeCount[code[i]]--;
        } else if (codeCount[guess[i]] > 0) {
            codeCount[guess[i]]--;
            count++;
        }
    }
    
    return count;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter a guess: ";
    cin >> guess;
    
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    
    cout << "White pegs: " << white << endl;
    cout << "Black pegs: " << black << endl;
    
    return 0;
}