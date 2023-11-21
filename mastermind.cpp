#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    bool counted[4] = {false};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
            counted[i] = true;
        } else {
            int codeCount[6] = {0};
            int guessCount[6] = {0};
            int index = code[i] - 'A';
            if (code[i] >= 'A' && code[i] <= 'F') {
                codeCount[index]++;
            }
            int guessIndex = guess[i] - 'A';
            if (guess[i] >= 'A' && guess[i] <= 'F') {
                guessCount[guessIndex]++;
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