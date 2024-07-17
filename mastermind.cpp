#include <string>
#include <algorithm>

int mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    int whiteCount = 0;
    int blackCount = 0;

    // Count correct colors in wrong positions
    for (char c : code) {
        int count = std::count(guess.begin(), guess.end(), c);
        whiteCount += count - (c == guess[0] ? 1 : 0);
    }

    // Count exact matches
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackCount++;
        }
    }

    black = blackCount;
    white = whiteCount;

    return black;
}

int main() {
    std::string code = "ABCD";
    std::string guess = "BBAE";
    int result = mastermind(code, guess);
    return 0;
}