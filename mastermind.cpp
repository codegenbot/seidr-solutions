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

    map<char, int> countCode, countGuess;

    for (char c : code) {
        countCode[c]++;
    }
    for (char c : guess) {
        countGuess[c]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            continue;
        }
        if (countGuess[guess[i]] > 0 && countCode[guess[i]] > 0) {
            white++;
            countGuess[guess[i]]--;
            countCode[guess[i]]--;
        }
    }

    return white + black;