#include <iostream>
#include <vector>
#include <string>

std::pair<int, int> getClue(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    std::string tempCode = code;
    std::string tempGuess = guess;

    // Count black pegs
    for (int i = 0; i < code.length(); i++) {
        if (tempCode[i] == tempGuess[i]) {
            blackPegs++;
            tempCode[i] = '-';
            tempGuess[i] = '-';
        }
    }

    // Count white pegs
    for (int i = 0; i < code.length(); i++) {
        if (tempGuess[i] != '-') {
            for (int j = 0; j < code.length(); j++) {
                if (tempCode[j] == tempGuess[i]) {
                    whitePegs++;
                    tempCode[j] = '-';
                    break;
                }
            }
        }
    }

    return std::make_pair(whitePegs, blackPegs);
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    std::pair<int, int> clue = getClue(code, guess);
    std::cout << clue.first << std::endl;
    std::cout << clue.second << std::endl;
    return 0;
}