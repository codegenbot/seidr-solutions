#include <string>
using namespace std;

struct PegCounts {
    int black;
    int white;
};

PegCounts mastermind(string code, string guess) {
    int black = 0;
    int white = 0;

    // Count the number of correct colors in wrong positions
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            code[i] = ' '; // Mark as used to avoid counting again
            guess[i] = ' ';
        }
    }

    // Count the number of correct colors in correct positions
    for (int i = 0; i < 4; ++i) {
        bool correctColor = false;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
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