#include <iostream>
#include <string>

int calculatePegs(const std::string& code, const std::string& guess) {
    int whitePegs = 0, blackPegs = 0;
    std::string codeCopy = code;
    std::string guessCopy = guess;
    
    for (int i = 0; i < 4; ++i) {
        if (code[i] == guess[i]) {
            ++blackPegs;
            codeCopy[i] = 'x'; // to mark as visited
            guessCopy[i] = 'x'; // to mark as visited
        }
    }
    
    for (int i = 0; i < 4; ++i) {
        if (codeCopy[i] != 'x') {
            for (int j = 0; j < 4; ++j) {
                if (codeCopy[i] == guessCopy[j]) {
                    ++whitePegs;
                    guessCopy[j] = 'x'; // to mark as visited
                    break;
                }
            }
        }
    }
    
    return (blackPegs * 10) + whitePegs;
}

bool isValidInput(const std::string& input) {
    return input.length() == 4 && input.find_first_not_of("ABCDEF") == std::string::npos && input.find(" ") == std::string::npos;
}

int main() {
    std::string code, guess;
    
    std::cout << "Enter the code: ";
    std::cin >> code;
    
    std::cout << "Enter the guess: ";
    std::cin >> guess;
    
    if (!isValidInput(code) || !isValidInput(guess)) {
        std::cout << "Invalid input. Please enter valid 4-character strings using characters A-F only." << std::endl;
        return 1;
    }
    
    int pegs = calculatePegs(code, guess);
    int blackPegs = pegs / 10;
    int whitePegs = pegs % 10;
    
    std::cout << "Black pegs: " << blackPegs << std::endl;
    std::cout << "White pegs: " << whitePegs << std::endl;
    
    return 0;
}