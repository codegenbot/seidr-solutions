#include <string>
#include <vector>
#include <iostream>

int whitePegs(std::string code, std::string guess) {
    int count = 0;
    std::vector<int> codeMap(6), guessMap(6);
    for (int i = 0; i < 4; i++) {
        if (guess[i] == code[i]) {
            count++;
        }
    }
    for (char c : code) {
        int asciiVal = static_cast<int>(c); 
        codeMap[asciiVal]++;
    }
    for (char c : guess) {
        int asciiVal = static_cast<int>(c);
        guessMap[asciiVal]++;
    }
    int white = 0;
    for (int i = 0; i < 6; i++) {
        if (guessMap[i] && codeMap[i]) {
            white--;
        }
    }
    return count + white;
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
    std::cout << "White pegs: " << whitePegs("abc1", "1231") << std::endl;
    std::cout << "Black pegs: " << blackPegs("abc1", "1231") << std::endl;
    return 0;
}