#include <vector>
#include <iostream>
#include <string>

int countWhitePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    for (char c : code) {
        if (code.find(c) != std::string::npos && 
            guess.find(std::string(1, c)) == std::string::npos || 
            guess.find(std::string(1, c)).find(c) != 0) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int countBlackPegs(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    for (char c : code) {
        if (code.find(c) != std::string::npos && 
            guess.find(std::string(1, c)) != std::string::npos &&
            code.find(c) == guess.find(std::string(1, c))) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int whitePegs = countWhitePegs(code, guess);
    int blackPegs = countBlackPegs(code, guess);
    std::cout << whitePegs << "\n";
    std::cout << blackPegs << "\n";
    return 0;
}