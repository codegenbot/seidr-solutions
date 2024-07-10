```c
#include <string>
using namespace std;

struct PegCounts {
    int black;
    int white;
};

PegCounts mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    string tempCode = code;
    string tempGuess = guess;

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        if (tempCode[i] == tempGuess[i]) {
            black++;
            tempCode[i] = ' '; // Mark as used to avoid counting again
            tempGuess[i] = ' ';
        }
    }

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; ++i) {
        bool correctColor = false;
        for (int j = 0; j < 4; ++j) {
            if (tempCode[j] == tempGuess[i]) {
                correctColor = true;
                break;
            }
        }
        if (correctColor) {
            white++;
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