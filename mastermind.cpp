```c++
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
    vector<char> remainingCode(codeArray.begin(), codeArray.end());
    for (char c : guess) {
        size_t pos = distance(remainingCode.begin(), find(remainingCode.begin(), remainingCode.end(), c));
        if (pos != string::npos) {
            count++;
            remainingCode.erase(pos, 1);
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << blackPegs(code, guess) << endl;
    cout << whitePegs(code, guess) << endl;
    return 0;
}