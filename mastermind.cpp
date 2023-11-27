#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    int codeCount[6] = {0};
    int guessCount[6] = {0};

    for (int i = 0; i < 4; i++) {
        codeCount[code[i] - 'A']++;
        guessCount[guess[i] - 'A']++;
    }

    for (int i = 0; i < 6; i++) {
        blackPegs += min(codeCount[i], guessCount[i]);
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs--;
        }
    }

    whitePegs = 4 - blackPegs;

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