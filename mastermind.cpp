```cpp
#include <iostream>
#include <string>
#include <utility>
#include <array>

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    std::array<int, 26> codeCount = {};  // Initialize with zeros
    std::array<int, 26> guessCount = {}; // Initialize with zeros

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'A']++;
            guessCount[guess[i] - 'A']++;
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
```