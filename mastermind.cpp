```cpp
#include <iostream>
#include <string>

int mastermind(std::string code, std::string guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for(int i=0; i<4; i++) {
        int matches = 0;
        for(size_t j=0; j<4; j++) {
            if(guess[j] == code[i]) {
                if(i==j) blackPegs++; 
                else whitePegs++;
                matches++;
            }
        }
        // If no matching characters were found, it means that the character at index i in
        // the code is not present in the guess. So we should increment whitePegs by 1.
        if(matches == 0) {
            whitePegs++;
        }
    }

    return blackPegs + whitePegs;
}

int main() {
    std::string code;
    std::string guess;

    std::cout << "Enter the Mastermind code: ";
    std::getline(std::cin, code);
    std::cout << "Enter your guess: ";
    std::getline(std::cin, guess);

    int pegs = mastermind(code, guess);
    std::cout << "Number of pegs: " << pegs << std::endl;
    return 0;
}