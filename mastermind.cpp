#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    int codeCount[6] = {0};

    // Count the occurrences of each character in the code
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i] - '0']++;
    }

    // Count the black pegs (correct color, correct place)
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            codeCount[guess[i] - '0']--;
        }
    }

    // Count the white pegs (correct color, wrong place)
    int i = 0;
    for (char c : guess) {
        if (c == code[i]) {
            codeCount[c - '0']--;
        } else {
            i++;
        }
    }

    return black;
}