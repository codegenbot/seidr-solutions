#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    for (char c : guess) {
        if (std::count(code.begin(), code.end(), c) > 0 && guess.find(std::string(1, c)) != std::string::npos) {
            black++;
        } else if (std::count(code.begin(), code.end(), c) > 0) {
            white++;
        }
    }

    return black;
}

int main() {
    std::string code = "ABCD";
    std::string guess = "BCDE";
    int result = mastermind(code, guess);
    std::cout << "Black pegs: " << result << std::endl;
    return 0;
}