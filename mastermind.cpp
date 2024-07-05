#include <iostream>
using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    vector<char> codeUsed;
    for (int i = 0; i < code.size(); ++i) {
        bool foundInCode = false;
        for (int j = 0; j < code.size(); ++j) {
            if (code[i] == guess[j]) {
                foundInCode = true;
                if (!binary_search(codeUsed.begin(), codeUsed.end(), guess[j])) {
                    count++;
                    codeUsed.push_back(guess[j]);
                }
            }
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    vector<char> codeUsed;
    for (int i = 0; i < code.size(); ++i) {
        bool foundInCode = false;
        for (int j = 0; j < code.size(); ++j) {
            if (code[i] == guess[j]) {
                foundInCode = true;
                if (i == j) {
                    count++;
                    codeUsed.push_back(guess[j]);
                }
            }
        }
    }
    return count;
}

int main() {
    string code;
    cout << "Enter the Mastermind code: ";
    cin >> code;

    string guess;
    cout << "Enter your guess: ";
    cin >> guess;

    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);

    cout << black << endl;
    cout << white << endl;

    return 0;
}