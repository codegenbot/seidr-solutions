#include <string>
#include <map>

int mastermind(std::string code, std::string guess) {
    if (code.length() != 4 || guess.length() != 4) {
        return -1; 
    }

    int white = 0;
    int black = 0;

    std::map<char,int> codeCount;
    for (char c : "ABCD") {
        codeCount[c] = 0;
    }
    for (char c : code) {
        codeCount[c]++;
    }

    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            black++;
        } else if (codeCount[guess[i]] > 0) {
            white++;
            codeCount[guess[i]]--;
        }
    }

    return black + white;
}

int main() {
    std::string code = "XXXX"; 
    std::string guess = "XXXX"; 

    int result = mastermind(code, guess);
    return result;
}