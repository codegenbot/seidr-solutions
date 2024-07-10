#include <vector>
#include <iostream>
#include <string>
#include <set>

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
        std::set<char> found;
        for (char cc : code) {
            if (c == cc) {
                ++count;
                found.insert(c);
            }
        }
        if (found.size() > 1) {
            whitePegs += found.size() - 1;
        } else if (found.size() == 1) {
            whitePegs++;
        }
    }
    return whitePegs;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int output = countWhitePegs(code, guess);
    std::cout << output << '\n' << countBlackPegs(code, guess) << '\n';
    return 0;
}