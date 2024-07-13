#include <iostream>
#include <map>

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return 1 - count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        } else {
            codeMap[code[i]]++;
        }
    }
    for (int i = 0; i < 4; ++i) {
        if (guess[i] != code[i] && codeMap[guess[i]]) {
            count++;
            codeMap[guess[i]]--;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << " ";
    cout << whitePegs(code, guess) << endl;
    return 0;
}