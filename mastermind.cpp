#include <vector>
#include <iostream>
#include <string>

int countBlackPegs(const std::string& code, const std::string& guess) {
    int blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        }
    }
    return blackPegs;
}

int countWhitePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    for (char c : guess) {
        int count = 0;
        for (char cc : code) {
            if (c == cc) {
                ++count;
            }
        }
        whitePegs += count - countBlackPegs(code, guess);
    }
    return whitePegs;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int blackPegs = countBlackPegs(code, guess);
    int whitePegs = countWhitePegs(code, guess);
    std::cout << whitePegs << '\n' << blackPegs << '\n';
    return 0;
}