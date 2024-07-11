#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        int codeCount = count(code.begin(), code.end(), guess[i]);
        int guessCount = count(guess.begin(), guess.end(), guess[i]);
        if (code[i] == guess[i]) {
            codeCount--;
            guessCount--;
        }
        if (codeCount > 0 && guessCount > 0) {
            count += min(codeCount, guessCount);
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int black = blackPegs(code, guess);
    cout << black << endl;
    cout << whitePegs(code, guess) << endl;
    return 0;
}