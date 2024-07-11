#include <vector>
#include <string>

int whitePegs(std::string code, std::string guess) {
    int count = 0;
    std::vector<int> codeMap(6), guessMap(6);
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            codeMap[code[i]-'A']++;
            guessMap[guess[i]-'A']++;
            count++;
        } else {
            for (int j = 0; j < 6; j++) {
                if (code[j] == guess[i] && codeMap[j] < 1) {
                    codeMap[j]++;
                    guessMap[j]++;
                    count++;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < 6; i++) {
        if (codeMap[i] > 1 || guessMap[i] > 1) {
            return -1;
        }
    }
    return count - blackPegs(code, guess);
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