#include <iostream>
#include <string>
#include <vector>

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    std::vector<int> codeFreq(6, 0);
    std::vector<int> guessFreq(6, 0);

    for (int i = 0; i < code.size(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i] - 'A']++;
            guessFreq[guess[i] - 'A']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += std::min(codeFreq[i], guessFreq[i]);
    }

    return {whitePegs, blackPegs};
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    std::pair<int, int> result = mastermind(code, guess);
    std::cout << result.first << std::endl;
    std::cout << result.second << std::endl;

    return 0;
}