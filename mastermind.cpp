#include <iostream>
#include <string>
#include <utility>

using namespace std;

std::pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    
    bool codeGuessed[6] = {false};
    
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
            codeGuessed[code[i]-'0'] = true;
        }
    }
    
    for(int i = 0; i < 4; i++) {
        bool found = false;
        for(int j = 0; j < 4; j++) {
            if(code[j] == guess[i] && !codeGuessed[code[j]-'0']) {
                whitePegs++;
                found = true;
                break;
            }
        }
        if(!found) codeGuessed[guess[i]-'0'] = true;
    }
    
    return std::make_pair(blackPegs, whitePegs);
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code (4 characters): ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    pair<int, int> result = mastermind(code, guess);
    cout << "Black pegs: " << result.first << ", White pegs: " << result.second << "\n";
}