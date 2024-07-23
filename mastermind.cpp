#include <vector>
#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    vector<char> codeCopy(code);
    vector<char> guessCopy(guess);

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            codeCopy[i] = ' '; // mark this position as visited
            guessCopy[i] = ' '; // mark this position as visited
        }
    }

    for (int i = 0; i < 4; i++) {
        int j = 0;
        while (j < 4) {
            if (codeCopy[j] == guess[i]) {
                white++;
                codeCopy[j] = ' '; // mark this position as visited
                break;
            }
            j++;
        }
    }

    return black, white;
}

int main() {
    string code;
    cin >> code;
    string guess;
    cin >> guess;
    int black, white;
    tie(black, white) = mastermind(code, guess);
    cout << black << endl;
    cout << white << endl;
    return 0;
}