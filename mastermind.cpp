#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of correct colors in wrong places (white pegs)
    for(int i=0; i<4; i++) {
        int count = 0;
        for(int j=0; j<4; j++) {
            if(guess[j] == code[i]) {
                count++;
                if(j != i) break;
            }
        }
        if(count < 4 && count > 0) white++;
    }

    // Count the number of correct colors in correct places (black pegs)
    int matched[6] = {0};
    for(int i=0; i<4; i++) {
        int count = 0;
        for(int j=0; j<4; j++) {
            if(guess[j] == code[i]) {
                count++;
                matched[code[i]-'A']++;
                if(j != i) break;
            }
        }
        if(count > 0) black++;
    }

    return white + black;
}