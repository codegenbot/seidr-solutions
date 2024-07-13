#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<char> possibleChars(6);

    for(int i = 0; i < 6; i++) {
        possibleChars[i] = '0' + i;
    }

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for(int i = 0; i < 4; i++) {
        codeCount[int(possibleChars.find(guess[i]))]++;
    }

    for(int i = 0; i < 4; i++) {
        guessCount[int(possibleChars.find(code[i]))]++;
    }

    for(int i = 0; i < 6; i++) {
        white += min(codeCount[i], guessCount[i]) - (code[i] == guess[i]);
    }

    return black + white;
}