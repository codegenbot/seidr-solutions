#include <string>
#include <vector>
#include <iostream>

int whitePegs(std::string code, std::string guess) {
    int count = 0;
    int codeMap[6] = {0}, guessMap[6] = {0};
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    for (char c : code) {
        codeMap[c - '0']++;
    }
    for (char c : guess) {
        guessMap[c - '0']++;
    }
    int white = 0;
    for (int i = 0; i < 6; i++) {
        if (codeMap[i] > 0 && guessMap[i] > 0) {
            white += codeMap[i];
        }
    }
    return count - blackPegs(code, guess) + white;
}

int blackPegs(std::string code, std::string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << "White pegs: " << whitePegs("abc1", "1231") << std::endl;
    std::cout << "Black pegs: " << blackPegs("abc1", "1231") << std::endl;
    return 0;
}