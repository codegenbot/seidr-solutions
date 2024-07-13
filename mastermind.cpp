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
    int count = 0;
    map<char, int> codeMap;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            count++;
        } else {
            codeMap[code[i]]++;
        }
    }
    for (auto it = codeMap.begin(); it != codeMap.end(); ++it) {
        if (count && it->second > 0 && countOf(guess, it->first) > 0) {
            count++;
            --it->second;
            --countOf(guess, it->first);
        }
    }
    return count;
}

int countOf(string s, char c) {
    int count = 0;
    for (char ch : s) {
        if (ch == c)
            count++;
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}