#include <vector>
#include <iostream>
#include <string>

int mastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            std::string codeCopy = code;
            std::string guessCopy = guess;
            codeCopy.erase(i, 1);
            guessCopy.erase(i, 1);
            --i;
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        int j = 0;
        while (j < 4) {
            if (code.find(guess[i]) != std::string::npos) {
                code.erase(code.find(guess[i]), 1);
                break;
            }
            j++;
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        int j = 0;
        while (j < 4) {
            if (guess.find(code[i]) != std::string::npos) {
                guess.erase(guess.find(code[i]), 1);
                break;
            }
            j++;
        }
    }

    whitePegs = 4 - blackPegs;

    return blackPegs;
}