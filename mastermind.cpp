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
    for (int i = 0; i < 4; ++i) {
        char c = guess[i];
        if (c == code[i]) {
            black++;
        } else if (code.find(c) != std::string::npos && codeCount[c] > 0) {
            white++;
            codeCount[c]--;
        } else if (std::string::npos != code.find(c)) {
            white++;
        }
    }

    return black + white;
}