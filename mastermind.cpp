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
    vector<char> codeArray(code.begin(), code.end());
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            codeArray[i] = '0';
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
    int black = 0;
    for(int i = 0; i < 4; i++) {
        if(guess[i] == code[i]) {
            black++;
        }
    }
    cout << black << endl;
    cout << white << endl;
    return 0;
}