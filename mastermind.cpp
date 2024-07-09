```cpp
#include <string>
#include <map>
#include <utility>

std::pair<int, int> mastermind(std::string code, std::string guess) {
    int white = 0;
    int black = 0;

    std::map<char, int> codeCount;
    std::map<char, int> guessCount;
    for (int i = 0; i < 4; ++i) {
        codeCount[code[i]]++;
        guessCount[guess[i]]++;
    }
    for (auto& pair : codeCount) {
        if (pair.second > 0 && pair.second != guessCount[pair.first]) {
            white += pair.second - guessCount[pair.first];
        }
    }

    int codeIndex = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
            codeIndex = i + 1;
        }
    }

    return std::make_pair(white, black);
}

int main() {
    std::string code = "ABCD";
    std::string guess = "BCDE";

    auto result = mastermind(code, guess);

    int white = result.first;
    int black = result.second;

    std::cout << "White pegs: " << white << "\n";
    std::cout << "Black pegs: " << black << "\n";

    return 0;
}