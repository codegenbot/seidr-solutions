#include <iostream>
#include <string>
#include <unordered_map>

int whitePegs(std::string code, std::string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int blackPegs(std::string code, std::string guess) {
    int blackCount = 0;
    int whiteCount = 0;
    
    std::unordered_map<char,int> codeMap;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackCount++;
        } else {
            if(codeMap.find(guess[i]) != codeMap.end()) {
                codeMap[guess[i]]++;
            }
        }
    }
    
    for(auto it = codeMap.begin(); it != codeMap.end(); it++) {
        whiteCount += std::min(it->second, 1);
    }
    
    return blackCount + whiteCount;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    std::cout << white << " " << black << std::endl;
    return 0;
}