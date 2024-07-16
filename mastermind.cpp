#include <tuple>
#include <vector>
#include <iostream>
#include <string>

std::tuple<int, int> mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    // Count black pegs
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count remaining correct colors (white pegs)
    std::vector<char> code_chars(code.begin(), code.end());
    for (int i = 0; i < 4; i++) {
        bool inCode = false;
        for (char c : code_chars) {
            if (c == guess[i] && !inCode) {
                white++;
                code_chars.erase(std::remove(code_chars.begin(), code_chars.end(), c), code_chars.end());
                inCode = true;
                break;
            }
        }
    }

    return std::make_tuple(white, black);
}

int main() {
    std::string code = "RGOR";
    std::string guess = "BRBB";
    auto [white, black] = mastermind(code, guess);
    std::cout << "White pegs: " << white << ", Black pegs: " << black << std::endl;
    return 0;
}