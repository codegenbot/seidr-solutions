#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    // Count the number of black pegs (correct color and correct place)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    // Count the number of white pegs (correct color, wrong place)
    int codeCount[6] = {0};
    for (char c : code) {
        codeCount[c - '0']++;
    }
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            continue;
        }
        if (codeCount[guess[i] - '0'] > 0) {
            white++;
            codeCount[guess[i] - '0']--;
        }
    }

    return black + white;
}

int main() {
    std::string code = "XXXX";
    std::string guess = "XXXX";
    int result = mastermind(code, guess);
    std::cout << "The number of white pegs is: " << result - 4 << ", and the number of black pegs is: " << 4 - (result - 4) << std::endl;
    return 0;
}