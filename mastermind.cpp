#include <iostream>
#include <string>
#include <vector>

std::pair<int, int> calculatePegs(const std::string& code, const std::string& guess) {
    std::vector<int> codeFreq(6, 0);
    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeFreq[code[i] - 'A']++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i] && codeFreq[guess[i] - 'A'] > 0) {
            whitePegs++;
            codeFreq[guess[i] - 'A']--;
        }
    }

    return {whitePegs, blackPegs};
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    auto result = calculatePegs(code, guess);
    std::cout << result.first << " " << result.second << std::endl;

    return 0;
}