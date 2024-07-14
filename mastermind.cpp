#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    // Count the number of correct colors in wrong place (white pegs)
    for(int i = 0; i < 4; ++i) {
        if(code[i] == guess[i]) {
            ++blackPegs;
        }
    }
    
    // Count the number of correct colors in correct place (black pegs)
    int codeCount[6] = {0};
    for(int i = 0; i < 4; ++i) {
        codeCount[code[i] - 'A']++;
    }
    for(int i = 0; i < 4; ++i) {
        if(code[i] == guess[i]) {
            --codeCount[code[i] - 'A'];
            ++blackPegs;
        } else if(codeCount[guess[i] - 'A'] > 0) {
            ++whitePegs;
            --codeCount[guess[i] - 'A'];
        }
    }
    
    return {blackPegs, whitePegs};
}