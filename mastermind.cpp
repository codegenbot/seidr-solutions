#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int codeFreq[6] = {0};
    int guessFreq[6] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F') {
                codeFreq[code[i] - 'A']++;
            }
            if (guess[i] >= 'A' && guess[i] <= 'F') {
                guessFreq[guess[i] - 'A']++;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        whitePegs += min(codeFreq[i], guessFreq[i]);
    }

    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;

    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}