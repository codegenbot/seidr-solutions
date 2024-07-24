#include <iostream>
#include <string>
#include <vector>

void calculatePegs(std::string code, std::string guess) {
    int blackPegs = 0, whitePegs = 0;
    std::vector<int> codeFreqCode(6, 0), codeFreqGuess(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F') ++codeFreqCode[code[i] - 'A'];
            if (guess[i] >= 'A' && guess[i] <= 'F') ++codeFreqGuess[guess[i] - 'A'];
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            for (int j = 0; j < 4; ++j) {
                if (code[i] != guess[i] && codeFreqCode[code[j] - 'A'] > 0 && codeFreqGuess[guess[j] - 'A'] > 0 && code[j] == guess[i]) {
                    ++whitePegs;
                    --codeFreqCode[code[j] - 'A'];
                    --codeFreqGuess[guess[j] - 'A'];
                    break;
                }
            }
        }
    }

    std::cout << "Black Pegs: " << blackPegs << ", White Pegs: " << whitePegs << std::endl;
}