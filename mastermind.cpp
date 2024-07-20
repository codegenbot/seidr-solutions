#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    int codeCount[6] = {0}, guessCount[6] = {0};
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
            codeCount[code[i]-'0'-1]++;
            guessCount[guess[i]-'0'-1]++;
        } else {
            codeCount[code[i]-'0'-1]++;
            guessCount[guess[i]-'0'-1]++;
            for(int j=0; j<6; j++) {
                if(codeCount[j] > 0 && guessCount[j] > codeCount[j]) {
                    white++;
                    codeCount[j]--;
                    guessCount[j]--;
                    break;
                }
            }
        }
    }
    
    return black + white;
}