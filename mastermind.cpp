#include <iostream>
#include <string>

bool isValidInput(const std::string& input) {
    return input.length() == 4 && input.find_first_not_of("ABCDEF") == std::string::npos && input.find(" ") == std::string::npos;
}

int main() {
    std::string code, guess;
    
    std::cout << "Enter the Mastermind code: ";
    std::cin >> code;
    
    std::cout << "Enter the guess: ";
    std::cin >> guess;
    
    int whitePegs = 0, blackPegs = 0;
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
            code[i] = guess[i] = 'x'; // marking correct positions with 'x'
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (guess[i] != 'x') {
            int pos = code.find(guess[i]);
            if (pos != std::string::npos) {
                ++whitePegs;
                code[pos] = 'x'; // marking matched colors with 'x'
            }
        }
    }
    
    std::cout << "White pegs: " << whitePegs << std::endl;
    std::cout << "Black pegs: " << blackPegs << std::endl;
    
    return 0;
}