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
    int blackPegs = 0;
    for (int i = 0; i < 4; i++) {
        if ((*codeMap)[guess[i]] > 0 && (*guessMap)[guess[i]] == 1) {
            blackPegs++;
            (*codeMap)[guess[i]]--;
            (*guessMap)[guess[i]]--;
        }
    }
    return count - blackPegs;
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