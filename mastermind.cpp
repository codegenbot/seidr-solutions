#include <vector>
#include <iostream>
#include <string>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    vector<char> codeArray(code.begin(), code.end());
    for (int i = 0; i < 4; ++i) {
        if (guess[i] == code[i]) {
            count++;
            codeArray[i] = 'X';
        }
    }
    for (int i = 0; i < 4; ++i) {
        if (count <= find(codeArray.begin(), codeArray.end(), guess[i]) - codeArray.begin()) {
            return count;
        } else {
            return count - 1;
        }
    }
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}