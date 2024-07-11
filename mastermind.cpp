#include <iostream>
#include <string>
#include <vector>

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
    vector<char> codeArray(code.begin(), code.end());
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            code.replace(i, 1, "x");
        }
    }
    for (int i = 0; i < 4; i++) {
        vector<char>::iterator it = find(codeArray.begin(), codeArray.end(), guess[i]);
        if (it != codeArray.end()) {
            count++;
            codeArray.erase(it);
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    cout << black << endl;
    cout << white << endl;
    return 0;
}