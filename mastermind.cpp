```cpp
#include <string>
#include <map>

int mastermind(std::string code, std::string guess) {
    int black = 0;
    int white = 0;

    std::map<char, int> codeCount;

    for (auto c : code) {
        codeCount[c]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else {
            if (codeCount[guess[i]] > 0) {
                white++;
                codeCount[guess[i]]--;
            }
        }
    }

    for (auto c : code) {
        if (codeCount[c] > 0 && c != guess[0] && c != guess[1] && c != guess[2] && c != guess[3]) {
            white++;
            codeCount[c]--;
        }
    }

    return black + white;
}

int main() {
    std::string code = "abcD";
    std::string guess = "abcd";

    int result = mastermind(code, guess);

    std::cout << "Black pegs: " << (result / 2) << "\n";
    std::cout << "White pegs: " << (result % 2) << "\n";

    return 0;
}