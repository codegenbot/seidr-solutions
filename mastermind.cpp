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
    int whiteCount = whitePegs(code, guess);
    
    std::unordered_map<char,int> codeMap;
    for(int i=0; i<4; i++) {
        codeMap[code[i]]++;
    }
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            continue;
        }
        
        for(int j=0; j<4; j++) {
            if(i != j && code[j] == guess[i]) {
                blackCount++;
                break;
            } else if (i != j && codeMap[guess[i]]-- > 0) {
                break;
            }
        }
    }
    
    return blackCount - whiteCount;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int white = whitePegs(code, guess);
    int black = blackPegs(code, guess);
    std::cout << white << " " << black << std::endl;
    return 0;
}