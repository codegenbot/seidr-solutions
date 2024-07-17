#include <vector>
#include <iostream>
#include <string>

int whitePegs(string code, string guess) {
    int white = 0;
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            white++;
        }
    }
    return white;
}

int blackPegs(string code, string guess) {
    int black = 0;
    map<char, int> codeCount, guessCount;
    
    for(int i = 0; i < 4; i++) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    
    for(auto& pair : codeCount) {
        if(pair.second > 0 && pair.first == guess[pair.second-1]) {
            black++;
        } else if(pair.second > 0) {
            black += min(pair.second, guessCount[pair.first]);
        }
    }
    
    return black;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter the guess: ";
    cin >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}