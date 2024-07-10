#include <string>
using namespace std;

struct PegCounts {
    int black;
    int white;
};

PegCounts mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    bool usedCode[4];
    bool usedGuess[4];

    for (int i = 0; i < 4; ++i) {
        usedCode[i] = false;
        usedGuess[i] = false;
    }

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            usedCode[i] = true;
            usedGuess[i] = true;
        }
    }

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; ++i) {
        bool correctColor = false;
        for (int j = 0; j < 4; ++j) {
            if (!usedCode[j] && code[j] == guess[i]) {
                correctColor = true;
                usedCode[j] = true;
                break;
            }
        }
        if (correctColor) {
            white++;
            usedGuess[guess.find(code[i])] = true;
        }
    }

    return {black, white};
}

int main() {
    string code = "ABCD";
    string guess = "ABDE";
    PegCounts result = mastermind(code, guess);
    return 0;
}