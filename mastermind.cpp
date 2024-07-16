```cpp
#include <iostream>
#include <string>

std::pair<int, int> mastermind(const std::string& code, const std::string& guess) {
    std::string all_chars = "RGYBO"; // assuming the 6 possible characters are R, G, O and so on

    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            black++;
        } else {
            bool found = false;
            for (char c : all_chars) { 
                if (c == guess[i]) {
                    found = true;
                    break;
                }
            }
            if (found)
                white++;
        }
    }

    return {white, black};
}

int main() {
    int white, black;
    std::string code = "RGYB";
    std::string guess = "BRBB";
    auto [w, b] = mastermind(code, guess);
    std::cout << "White pegs: " << w << ", Black pegs: " << b << std::endl;
    return 0;
}