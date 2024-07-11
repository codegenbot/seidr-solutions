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
    vector<char> codeArray(code.begin(), code.end());
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            codeArray[i] = '0';
        }
    }
    for (int i = 0; i < 4; i++) {
        char c = guess[i];
        auto it = remove(codeArray.begin(), codeArray.end(), c) - codeArray.begin();
        codeArray.erase(it, codeArray.end());
        if (it != codeArray.begin()) count++;
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    int black = 4 - whitePegs(code, guess);
    cout << black << endl;
    cout << whitePegs(code, guess) << endl;
    return 0;
}