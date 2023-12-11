```cpp
#include <iostream>
#include <string>
#include <utility>

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            codeCount[code[i] - 'A' + '0']++;
            guessCount[guess[i] - 'A' + '0']++;
        }
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += std::min(codeCount[i], guessCount[i]);
    }

    return std::make_pair(whitePegs, blackPegs);
}

int main() {
    char code[5], guess[5];
    std::cin >> code;
    std::cin >> guess;
    std::pair<int, int> result = mastermind(code, guess);
    std::cout << result.first << std::endl;
    std::cout << result.second << std::endl;
    return 0;
}
```