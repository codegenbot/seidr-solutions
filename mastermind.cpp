#include <string>
#include <vector>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    unordered_map<char, int> possibleChars;
    for(int i = 0; i < 6; i++) {
        possibleChars['0' + i] = 1;
    }

    vector<char> codeVec(code);
    vector<char> guessVec(guess);

    for(int i = 0; i < 4; i++) {
        if(codeVec[i] == guessVec[i]) {
            black++;
            codeVec[i] = '\0';
            guessVec[i] = '\0';
        }
    }

    for(int i = 0; i < 4; i++) {
        bool foundInCode = false;
        for(int j = 0; j < 6; j++) {
            if(codeVec[j] == guessVec[i]) {
                foundInCode = true;
                codeVec[j] = '\0';
                break;
            }
        }
        if(!foundInCode) white++;
    }

    return black + white;
}