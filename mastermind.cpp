#include <string>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : code) {
        int index = guess.find(c);
        while(index != std::string::npos) {
            if (index < black) {
                index = guess.find(c, index+1);
                continue;
            }
            white++;
            index = guess.find(c, index+1);
        }
    }

    return black + white;
}