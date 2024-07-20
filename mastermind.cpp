#include <vector>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;

    int white = whitePegs(code, guess);
    int black = 0;
    map<char, int> codeCount;
    for (int i = 0; i < 4; i++) {
        codeCount[code[i]]++;
    }

    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            black++;
            codeCount[code[i]]--;
        }
    }

    for (auto &pair : codeCount) {
        if (pair.second > 0) {
            black += pair.second;
        }
    }

    cout << white << std::endl;
    cout << black << std::endl;

    return 0;