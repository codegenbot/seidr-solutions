#include <vector>
#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    vector<int> guessCount(6, 0);
    for(int i = 0; i < 4; i++) {
        guessCount[guess[i] - '0']++;
    }

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            code[i] = 'x';
            guess[i] = 'x';
            black++;
        }
    }

    for(int i = 0; i < 4; i++) {
        if(code[i] != guess[i]) {
            for(int j = 0; j < 6; j++) {
                if(guessCount[j] > 0 && code[i] == '0' + j) {
                    white++;
                    guessCount[j]--;
                    break;
                }
            }
        }
    }

    return black + white;
}