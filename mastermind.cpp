#include <vector>
#include <iostream>
#include <string>
#include <map>

int whitePegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int black_codePegs(string code, string guess) {
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
    int black = black_codePegs(code, guess);

    std::cout << white << std::endl;
    std::cout << black << std::endl;

    return 0;