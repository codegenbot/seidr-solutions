#include <string>
#include <map>

int mastermind(std::string code, std::string guess) {
    if (code.length() != 4 || guess.length() != 4) {
        return -1; 
    }

    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    std::map<char,int> codeCount;
    for (char c : code) {
        codeCount[c]++;
    }
    for (char c : guess) {
        if (std::string::npos != code.find(c) && codeCount[c] > 0) {
            white++;
            codeCount[c]--;
        }
    }

    return black + white;
}