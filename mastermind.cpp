```cpp
#include <iostream>
#include <string>

std::pair<int, int> solveMastermind(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    int whitePegs = 0;

    // A map to store the frequency of each character in the code
    std::map<char, int> codeFreq;

    // Count the black pegs (correct color, correct place)
    for (int i = 0; i < code.size(); ++i) {
        if (code[i] == guess[i]) {
            blackPegs++;
        }
        else {
            // Update the frequency of characters in the code
            codeFreq[code[i]]++;
        }
    }

    // Count the white pegs (correct color, wrong place)
    for (int i = 0; i < guess.size(); ++i) {
        if (code[i] != guess[i] && codeFreq[guess[i]] > 0) {
            whitePegs++;
            codeFreq[guess[i]]--; // decrement the frequency of the character in the code
        }
    }

    return {whitePegs, blackPegs};
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;

    std::pair<int, int> result = solveMastermind(code, guess);

    std::cout << result.first << std::endl;
    std::cout << result.second << std::endl;

    return 0;
}
```