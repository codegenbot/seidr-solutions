#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};
    bool counted[4] = {false};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
            counted[i] = true;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F') {
                codeCount[code[i] - 'A']++;
            }
            if (guess[i] >= 'A' && guess[i] <= 'F') {
                guessCount[guess[i] - 'A']++;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        if (!counted[i] && codeCount[i] > 0) {
            int index = code[i] - 'A';
            if (guessCount[index] > 0) {
                whitePegs++;
                guessCount[index]--;
            }
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