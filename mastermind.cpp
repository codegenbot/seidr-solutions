#include <string>
#include <map>

int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char,int> codeCount;
    codeCount['A'] = 0;
    codeCount['B'] = 0;
    codeCount['C'] = 0;
    codeCount['D'] = 0;
    for (char c : code) {
        codeCount[c]++;
    }
    
    map<char,int> guessCount;
    guessCount['A'] = 0;
    guessCount['B'] = 0;
    guessCount['C'] = 0;
    guessCount['D'] = 0;
    for (char c : guess) {
        guessCount[c]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            char c = guess[i];
            codeCount[c]--;
            if (codeCount[c] <= 0 && guessCount[c] > 0) {
                white++;
            }
        }
    }

    return black + white;
}