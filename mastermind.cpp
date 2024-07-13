#include <string>
#include <vector>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<char> chars(6);

    for(int i = 0; i < 6; i++) {
        chars[i] = '0' + i;
    }

    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            black++;
        }
    }

    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for(int i = 0; i < 4; i++) {
        codeCount[int(chars.find(guess[i]))]++;
    }

    for(int i = 0; i < 4; i++) {
        guessCount[int(chars.find(code[i]))]++;
    }

    for(int i = 0; i < 6; i++) {
        white += min(codeCount[i], guessCount[i]) - (code[i] == guess[i]);
    }

    return black + white;
}