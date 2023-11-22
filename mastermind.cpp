#include <iostream>
#include <string>
using namespace std;

pair<int, int> mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    int count[6] = {0};

    for (int i = 0; i < code.length(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else {
            count[code[i] - 'A']++;
            count[guess[i] - 'A']--;
        }
    }

    for (int i = 0; i < 6; i++) {
        if (count[i] > 0) {
            whitePegs += count[i];
        }
    }

    return make_pair(whitePegs, blackPegs);
}

int main() {
    string code;
    string guess;

    cin >> code >> guess;

    pair<int, int> result = mastermind(code, guess);

    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}