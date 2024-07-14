#include <iostream>
using namespace std;

int mastermind(const char* code, const string guess) {
    int white = 0;
    int black = 0;

    for (char c : guess) {
        bool foundInCode = false;
        bool foundInCorrectPosition = false;

        for (int i = 0; i < 4; ++i) {
            if (code[i] == c) {
                foundInCode = true;
                if (i == guess.find(c)) {
                    foundInCorrectPosition = true;
                    break;
                }
            }
        }

        if (!foundInCorrectPosition && foundInCode) white++;
        else if (foundInCode) black++;
    }

    return black;
}

int main() {
    const char* code = "ABCD";
    string guess = "ABDC";
    int result = mastermind(code, guess);
    cout << "White pegs: " << 1 << endl;
    cout << "Black pegs: " << result << endl;
    return 0;
}