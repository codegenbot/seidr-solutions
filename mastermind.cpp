#include <iostream>
#include <vector>
#include <string>

using namespace std;

void calculatePegs(string code, string guess);

int main() {
    string code, guess;
    cout << "Enter code: ";
    cin >> code;
    cout << "Enter guess: ";
    cin >> guess;

    calculatePegs(code, guess);

    return 0;
}

void calculatePegs(string code, string guess) {
    int blackPegs = 0, whitePegs = 0;
    vector<int> codeFreqCode(6, 0), codeFreqGuess(6, 0);

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F') ++codeFreqCode[code[i] - 'A'];
            if (guess[i] >= 'A' && guess[i] <= 'F') ++codeFreqGuess[guess[i] - 'A'];
        }
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] != guess[i]) {
            for (int j = 0; j < 4; ++j) {
                if (code[i] != guess[i] && codeFreqCode[code[j] - 'A'] > 0 && codeFreqGuess[guess[j] - 'A'] > 0 && code[j] == guess[i]) {
                    ++whitePegs;
                    --codeFreqCode[code[j] - 'A'];
                    --codeFreqGuess[guess[j] - 'A'];
                    break;
                }
            }
        }
    }

    cout << "Black Pegs: " << blackPegs << ", White Pegs: " << whitePegs << endl;
}