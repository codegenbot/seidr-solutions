#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    int codeCount[6] = {0};
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else {
            int count = 0;
            for(int j=0; j<4; j++) {
                if(guess[j] == code[i])
                    count++;
            }
            if(count > 0)
                white += count - 1;
            codeCount[code[i]-'0']++;
        }
    }
    for(int i='0'; i<='5'; i++) {
        if(codeCount[i-'0'] > 0) 
            white -= codeCount[i-'0'];
    }
    return black + white;