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
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            continue;
        }
        
        bool isBlack = false;
        for(int j=0; j<4; j++) {
            if(i != j && code[j] == guess[i]) {
                isBlack = true;
                break;
            } else if (i != j) {
                for(int k=0; k<4; k++) {
                    if(j != k && code[k] == guess[i]) {
                        blackCount++;
                        isBlack = true;
                        break;
                    }
                }
            }
        }
        
        if(!isBlack) {
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