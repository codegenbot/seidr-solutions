#include <vector>
#include <iostream>
#include <string>

using namespace std;

int masterMind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    // Count correct colors in wrong positions
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
            break;
        }
    }
    
    // Count correct colors in correct positions
    int codeIndex[6];
    int guessIndex[6];
    for (int i = 0; i < 6; i++) {
        codeIndex[code[i] - 'A'] = i;
        guessIndex[guess[i] - 'A'] = i;
    }
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            whitePegs++;
        } else if (codeIndex[code[i] - 'A'] != guessIndex[guess[i] - 'A']) {
            whitePegs++;
        }
    }
    
    return blackPegs, whitePegs;
}