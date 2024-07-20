#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;
    int code_counts[6] = {0};
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        } else {
            code_counts[code[i] - 'A']++;
            int count = 0;
            for(int j=0; j<4; j++) {
                if(guess[j] == code[i])
                    count++;
            }
            if(count > 0)
                white += count - 1;
        }
    }
    
    for(int i=0; i<6; i++) {
        while(code_counts[i] > 0) {
            code_counts[i]--;
            white++;
        }
    }
    
    return black + white;
}