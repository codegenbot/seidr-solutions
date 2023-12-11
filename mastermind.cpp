#include <iostream>
#include <string>
#include <vector>
#include <cctype>

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    std::vector<int> codeCount(26, 0);
    std::vector<int> guessCount(26, 0);

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[toupper(code[i]) - 'A']++;
            guessCount[toupper(guess[i]) - 'A']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        whitePegs += std::min(codeCount[i], guessCount[i]);
    }

    return std::make_pair(whitePegs, blackPegs);
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    std::pair<int, int> result = mastermind(code, guess);
    std::cout << result.first << std::endl;
    std::cout << result.second << std::endl;

    return 0;
}