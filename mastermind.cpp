#include <vector>
using namespace std;

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    // count white pegs
    vector<char> codeCount(6, 0);
    vector<char> guessCount(6, 0);
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            guessCount[code[i]]++;
            codeCount[code[i]]++;
        }
    }
    for (int i = 0; i < 6; i++) {
        whitePegs += min(codeCount[i], guessCount[i]);
    }

    // count black pegs
    vector<char> codePosition(6, -1);
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            codePosition[code[i]] = i;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i] && codePosition[guess[i]] == i) {
            blackPegs++;
        }
    }

    return {blackPegs, whitePegs};
}