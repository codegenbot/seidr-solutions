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
            blackCount++;
            continue;
        }
        
        codeMap[guess[i]]--;
        
        bool isPresent = false;
        for(int j=0; j<4; j++) {
            if(i != j && code[j] == guess[i]) {
                isPresent = true;
                break;
            } else if (i != j && codeMap[code[j]]-- > 0) {
                blackCount++;
                break;
            }
        }
        
        if(!isPresent) {
            blackCount++;
        }
    }
    
    return blackCount - whiteCount;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    int white = whitePegs(code, guess);
    std::cout << white << std::endl;
    std::cout << blackPegs(code, guess) << std::endl;
    return 0;
}