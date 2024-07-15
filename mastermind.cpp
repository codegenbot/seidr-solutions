#include <iostream>
#include <string>
#include <map>

int std::whitePegs(std::string code, std::string guess) {
    int count = 0;
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int std::blackPegs(std::string code, std::string guess) {
    int count = 0;
    map<char,int> codeMap;
    for(int i=0; i<4; i++) {
        codeMap[code[i]]++;
    }
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            codeMap[code[i]]--;
        } else if(codeMap.find(guess[i]) != codeMap.end()) {
            codeMap[guess[i]]--;
            count++;
        }
    }
    
    for(auto it : codeMap) {
        if(it.second > 0) {
            return 0;
        }
    }
    
    return count;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    std::cout << std::whitePegs(code, guess) << std::endl;
    std::cout << std::blackPegs(code, guess) << std::endl;
    return 0;
}