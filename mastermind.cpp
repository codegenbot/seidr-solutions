#include <iostream>
#include <string>
#include <vector>

std::pair<int, int> getClue(const std::string& code, const std::string& guess) {
    std::vector<int> codeCount(6, 0);
    std::vector<int> guessCount(6, 0);
    int blackPegs = 0;
    int whitePegs = 0;

    for (int i = 0; i < code.size(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += std::min(codeCount[i], guessCount[i]);
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