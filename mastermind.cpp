#include <vector>
#include <iostream>
using namespace std;

int masterMind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    vector<char> codeArr(code.begin(), code.end());
    vector<char> guessArr(guess.begin(), guess.end());

    for (int i = 0; i < 4; i++) {
        if (codeArr[i] == guessArr[i]) {
            blackPegs++;
            codeArr[i] = 'X';
            guessArr[i] = 'X';
        }
    }

    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < 4; j++) {
            if (codeArr[j] == guessArr[i] && codeArr[j] != 'X') {
                whitePegs++;
                codeArr[j] = 'X';
                found = true;
                break;
            }
        }
    }

    return make_pair(blackPegs, whitePegs).first;
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code: ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    int result = masterMind(code, guess);
    if (result == 4) {
        cout << "0\n" << result << endl;
    } else {
        cout << result << "\n0" << endl;
    }
    return 0;
}