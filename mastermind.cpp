#include <iostream>
#include <map>
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
    map<char, int> codeMap, guessMap;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            codeMap[code[i]]--;
            guessMap[guess[i]]--;
        } else {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
        }
    }
    int blackPegs = 0;
    for (auto& pair : codeMap) {
        if (pair.second == 1) {
            blackPegs++;
        }
    }
    return blackPegs;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}