#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int codeCount[6] = {0};

    for (int i = 0; i < 4; i++) {
        if (toupper(code[i]) == toupper(guess[i])) {
            blackPegs++;
        } else {
            if (code[i] >= 'A' && code[i] <= 'F') {
                codeCount[code[i] - 'A']++;
            }
        }
    }

    for (int i = 0; i < guess.size(); i++) {
        int index = toupper(guess[i]) - 'A';
        if (toupper(guess[i]) != toupper(code[i]) && codeCount[index] > 0) {
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