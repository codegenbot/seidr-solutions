#include <cstddef>
#include <string>

int mastermind(const std::string& code, const std::string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for(int i=0; i<4; i++) {
        if(guess[i] == code[i]) { 
            blackPegs++;
        }
    }

    for(int i=0; i<4; i++) {
        bool found = false;
        int count = 0;
        for(int j=0; j<4; j++) {
            if(code[j] == guess[i]) {
                found = true;
                count++;
                if(j==i) blackPegs++; 
                else whitePegs++;      
            }
        }
        if(!found) whitePegs += count;
    }

    return blackPegs + whitePegs;
}

int main() {
    std::string code = "abcz";
    std::string guess = "abcd";
    int result = mastermind(code, guess);
    return result;
}