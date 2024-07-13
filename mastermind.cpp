```cpp
#include <string>

int mastermind(string code, string guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    map<char, int> code_count;
    for (char c : code) {
        code_count[c]++;
    }

    for (char c : guess) {
        if (c == code[0] || c == code[1] || c == code[2] || c == code[3]) {
            if (code.find(c) != string::npos) {
                black++;
                code_count[c]--;
            }
            else {
                white++;
            }
        }
    }

    for (auto &pair : code_count) {
        while (pair.second > 0) {
            if (code.find(pair.first) != string::npos) {
                black += pair.second;
                break;
            }
            white += pair.second;
            pair.second = 0;
        }
    }

    return white + black;
}