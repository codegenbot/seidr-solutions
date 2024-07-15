#include <iostream>
#include <map>
using namespace std;

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
    map<char,int> codeMap;
    for(int i=0; i<4; i++) {
        codeMap[code[i]]++;
    }
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackCount++;
        } else if(codeMap.find(guess[i]) != codeMap.end()) {
            codeMap[guess[i]]--;
        }
    }
    
    int remainingBlackPegs = 0;
    for(auto it : codeMap) {
        if(it.second > 1) {
            remainingBlackPegs += it.second - 1;
        } else if(it.second == 1 && codeMap.find(guess[0]) != codeMap.end()) {
            remainingBlackPegs++;
        }
    }
    
    return blackCount + remainingBlackPegs;
}

int main() {
    std::string code, guess;
    std::cin >> code >> guess;
    std::cout << whitePegs(code, guess) << std::endl;
    int blackPeg = blackPegs(code, guess);
    std::cout << blackPeg << std::endl;
    return 0;
}