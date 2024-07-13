#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> codeCount;
    for (char c : code) {
        codeCount[c]++;
    }

    for (char c : guess) {
        if (codeCount[c] > 0 && code[c - 'A' + 1] == c) {
            black++;
            codeCount[c]--;
        } else if (codeCount[c] > 0) {
            white++;
            codeCount[c]--;
        }
    }

    return white + black;
}