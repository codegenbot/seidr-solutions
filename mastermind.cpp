#include <vector>
#include <iostream>
#include <string>

using namespace std;

int mastermind(string code, string guess) {
    int black = 0;
    int white = 0;
    vector<char> c(6);
    for (char ch : code) {
        if (!c[ch-'A']) {
            c[ch-'A'] = true;
        }
    }

    for (int i = 0; i < 4; ++i) {
        char ch = guess[i];
        if (ch == code[i]) {
            black++;
        } else if (c[ch-'A']) {
            white++;
        }
    }

    return make_pair(white, black).second;
}

int main() {
    string code;
    cout << "Enter the Mastermind code: ";
    cin >> code;

    string guess;
    cout << "Enter the guess: ";
    cin >> guess;

    int result = mastermind(code, guess);
    cout << result << endl;

    return 0;
}