#include <vector>
#include <iostream>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    
    vector<int> codeCount(6, 0);
    vector<int> guessCount(6, 0);
    
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        int diff = codeCount[i] - guessCount[i];
        white += min(diff, 4 - diff);
    }
    
    return make_pair(white, black).second;
}