#include <iostream>

int mastermind(const char* code, const char* guess) {
    int white = 0;
    int black = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    int count = 0;
    for (char c : code) {
        if (c == guess[0]) {
            count++;
        }
        else if (c == guess[1]) {
            count++;
        }
        else if (c == guess[2]) {
            count++;
        }
        else if (c == guess[3]) {
            count++;
        }
    }
    if (count > 1) {
        white += count - 1;
    }
    else if (count == 1) {
        black--;
    }

    for (int i = 0; i < 4; ++i) {
        int found = 0;
        for (int j = 0; j < 4; ++j) {
            if (code[j] == guess[i]) {
                found++;
                if (i == j) {
                    black++;
                }
                else {
                    white++;
                }
            }
        }
        if (found > 1) {
            white -= found - 1;
        }
    }

    return black + white;
}

int main() {
    const char* code = "ABCD";
    const char* guess = "ABDE";
    int result = mastermind(code, guess);
    std::cout << result;
    return 0;
}