#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int codeCount[26] = {0};

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F') {
                codeCount[code[i] - 'A']++;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        int index = guess[i] - 'A';
        if (guess[i] != code[i] && codeCount[index] > 0 && guess[i] >= 'A' && guess[i] <= 'F') {
            whitePegs++;
            codeCount[index]--;
        }
    }

    return make_pair(blackPegs, whitePegs);
}

int main() {
    string code, guess;
    cin >> code >> guess;

    pair<int, int> result = mastermind(code, guess);
    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}