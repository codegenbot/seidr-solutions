```cpp
#include <cstddef>
#include <string>

int main() {
    std::string code = "XXXX"; 
    std::string guess("XXXX", 4); 
    int result = mastermind(code, guess);
    return 0;
}

int mastermind(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for(int i=0; i<4; i++) {
        if(guess[i] == code[i]) { 
            blackPegs++;
        }
    }

    for(int j=0; j<4; j++) {
        bool found = false;
        int count = 0;
        for(int k=0; k<4; k++) {
            if(code[k] == guess[j]) {
                found = true;
                count++;
                if(k==j) blackPegs++; 
                else whitePegs++;      
            }
        }
        if(!found) whitePegs += count;
    }

    return blackPegs + whitePegs;
}