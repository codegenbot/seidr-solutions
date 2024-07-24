#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void calculatePegs(string code, string guess) {
    int blackPegs = 0, whitePegs = 0;
    vector<int> codeFreqCode(6, 0), codeFreqGuess(6, 0);
    unordered_set<int> matchedIndices;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
            matchedIndices.insert(i);
        } else {
            if (code[i] >= 'A' && code[i] <= 'F') ++codeFreqCode[code[i] - 'A'];
            if (guess[i] >= 'A' && guess[i] <= 'F') ++codeFreqGuess[guess[i] - 'A'];
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (matchedIndices.count(i) == 0) {
            for (int j = 0; j < 4; ++j) {
                if (codeFreqCode[code[j] - 'A'] > 0 && codeFreqGuess[guess[i] - 'A'] > 0 && code[j] == guess[i]) {
                    ++whitePegs;
                    --codeFreqCode[code[j] - 'A'];
                    --codeFreqGuess[guess[i] - 'A'];
                    break;
                }
            }
        }
    }

    cout << "Black Pegs: " << blackPegs << ", White Pegs: " << whitePegs << endl;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    calculatePegs(code, guess);
    return 0;
}