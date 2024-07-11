#include <string>
#include <unordered_map>

int whitePegs(std::string code, std::string guess) {
    int count = 0;
    std::unordered_map<char, int> codeMap, guessMap;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    for (char c : code) {
        (*codeMap)[c]++;
    }
    for (char c : guess) {
        (*guessMap)[c]++;
    }
    int correctWrong = 0;
    for (const auto &pair : codeMap) {
        if ((*guessMap).count(pair.first)) {
            int codeCount = pair.second;
            int guessCount = (*guessMap)[pair.first];
            correctWrong += std::min(codeCount, guessCount);
        }
    }
    return correctWrong - count;
}

int blackPegs(std::string code, std::string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    // Use your whitePegs and blackPegs functions here
    return 0;
}