#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct color and position pegs
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of correct color but wrong position pegs
    int code_counts[6] = {0};
    for(int i=0; i<4; i++) {
        code_counts[int(code[i]-'A')]++;
    }
    for(int i=0; i<4; i++) {
        if(guess[i] != code[i]) {
            if(code_counts[int(guess[i]-'A')] > 0) {
                white++;
                code_counts[int(guess[i]-'A')]--;
            }
        }
    }

    return black + white;
}