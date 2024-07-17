```cpp
#include <vector>
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        }
    }

    int code_count[6] = {0};
    for (char c : code) {
        code_count[c - 'A']++;
    }

    int guess_count[6] = {0};
    for (char c : guess) {
        guess_count[c - 'A']++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) continue;
        if (guess_count[guess[i] - 'A'] > 0 && code_count[code[i] - 'A'] > 0) {
            white++;
            code_count[code[i] - 'A']--;
            guess_count[guess[i] - 'A']--;
        }
    }

    return black + white;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int result = mastermind(code, guess);
    std::cout << result << '\n';
    return 0;
}