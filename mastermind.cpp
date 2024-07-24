#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<char> codeVec(code.begin(), code.end());
    vector<char> guessVec(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (codeVec[i] == guessVec[i]) {
            black++;
            codeVec[i] = '\0';
            guessVec[i] = '\0';
        }
    }

    for (int i = 0; i < 4; i++) {
        for (char c : codeVec) {
            if (c != '\0' && c == guessVec[i]) {
                white++;
                codeVec[codeVec.size() - 1] = '\0';
                break;
            }
        }
    }

    return make_pair(white, black).second;
}