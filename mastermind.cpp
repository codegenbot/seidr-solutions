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
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        int j = 0;
        while (j < 4) {
            if (code[j] == guess[i]) {
                std::string codeCopy = code;
                std::string guessCopy = guess;
                codeCopy.erase(j, 1);
                j--;
                break;
            }
            j++;
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        int count = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                count++;
            }
        }
        whitePegs += count - 1;
    }

    return blackPegs;
}