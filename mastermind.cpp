#include <string>
#include <vector>

using namespace std;

int blackPegs(std::string code, std::string guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    return count;
}

int whitePegs(std::string code, std::string guess) {
    int count = 0;
    vector<int> codeMap(6), guessMap(6);
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    for (char c : code) {
        codeMap[std::min(c, '5') - '0']++; // Ensure c is within valid range
    }
    for (char c : guess) {
        guessMap[std::min(c, '5') - '0']++; // Ensure c is within valid range
    }
    int blackPegsCount = blackPegs(code, guess);
    return count - blackPegsCount;
}