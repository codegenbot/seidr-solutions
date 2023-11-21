#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int codeCount[26] = {0};
    int guessCount[26] = {0};
    bool counted[4] = {false};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
            counted[i] = true;
        } else {
            if (guess[i] >= 'A' && guess[i] <= 'F') {
                guessCount[guess[i] - 'A']++;
            }
            if (code[i] >= 'A' && code[i] <= 'F') {
                codeCount[code[i] - 'A']++;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        if (!counted[i]) {
            int index = code[i] - 'A';
            whitePegs += min(codeCount[index], guessCount[index]);
        }
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