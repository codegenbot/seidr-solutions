#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    // Count black pegs
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
            code[i] = ' '; // mark as checked
            guess[i] = ' '; // mark as checked
        }
    }

    // Count white pegs
    for (int i = 0; i < 4; ++i) {
        bool found = false;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                code[j] = ' '; // mark as checked
                found = true;
                break;
            }
        }
        if (found) whitePegs++;
    }

    return blackPegs << 2 | whitePegs; // return the number of pegs in binary format
}