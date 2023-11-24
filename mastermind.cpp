#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int codeCount[26] = {};
    int guessCount[26] = {};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            int codeIndex = code[i] - 'A';
            int guessIndex = guess[i] - 'A';
            if (codeIndex >= 0 && codeIndex < 26) {
                codeCount[codeIndex]++;
            }
            if (guessIndex >= 0 && guessIndex < 26) {
                guessCount[guessIndex]++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        whitePegs += min(codeCount[i], guessCount[i]);
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