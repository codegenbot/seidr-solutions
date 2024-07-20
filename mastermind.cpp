#include <vector>
#include <iostream>
#include <string>

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeCount;
    for (int i = 0; i < 4; i++) {
        codeCount[code[i]]++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
            codeCount[code[i]]--;
        }
    }

    for (auto &pair : codeCount) {
        if (pair.second > 0) {
            count += pair.second;
        }
    }

    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;

    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);

    cout << white << endl;
    cout << black << endl;

    return 0;
}