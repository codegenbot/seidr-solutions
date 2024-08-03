#include <vector>
#include <string>
using namespace std;

int mastermindCode(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    
    vector<char> codeVector(code.begin(), code.end());
    vector<char> guessVector(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (codeVector[i] == guessVector[i]) {
            blackPegs++;
            codeVector[i] = '-';
            guessVector[i] = '-';
        }
    }

    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (guessVector[j] == codeVector[i] && codeVector[i] != '-') {
                whitePegs++;
                codeVector[i] = '-';
                guessVector[j] = '-';
                found = true;
                break;
            }
        }
    }

    return make_pair(blackPegs, whitePegs).second;
}