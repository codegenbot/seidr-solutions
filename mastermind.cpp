```cpp
#include <string>
#include <map>

int whitePegs(string code, string guess) {
    int count = 0;
    std::map<char, int> codeMap, guessMap;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            codeMap[code[i]]++;
            guessMap[guess[i]]++;
            count++;
        }
    }
    for (auto &pair : codeMap) {
        if (codeMap[pair.first] > 1 || guessMap[pair.first] > 1) {
            return -1;
        }
    }
    int blackPegsCount = blackPegs(code, guess);
    return count - blackPegsCount;
}

int blackPegs(string code, string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    return count;
}