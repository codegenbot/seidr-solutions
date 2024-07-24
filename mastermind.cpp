#include <vector>
#include <iostream>
#include <string>

int whitePegs(const std::string& code, const std::string& guess) {
    int white = 0;
    for (char c : guess) {
        bool found = false;
        for (char d : code) {
            if (c == d) {
                found = true;
                break;
            }
        }
        if (!found) {
            white++;
        }
    }
    return white;
}

int blackPegs(const std::string& code, const std::string& guess) {
    int black = 0;
    for (char c : guess) {
        bool found = false;
        char pos = -1;
        for (int i = 0; i < 4; ++i) {
            if (code[i] == c) {
                found = true;
                pos = i;
                break;
            }
        }
        if (found) {
            black++;
            code.replace(pos, 1, "");
        }
    }
    return black;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    std::cout << white << "\n" << black << "\n";
    return 0;
}