#include <iostream>
#include <string>
#include <sstream>

int roll(std::istringstream& input) {
    int pin = 0; 
    int rolls = 0;
    
    while (input >> pin && pin > 0) { 
        if(pin == 10) break; 
        if(input.peek() == '/') {
            if (input >> pin && pin > 0) break;
        }
        rolls++; 
    }
    
    return rolls;
}

int bowlingScore(const std::string& input) {
    int score = 0;
    for (char c : input) {
        if (c == '/') {
            score += roll(std::istringstream(input.substr(input.find('/')+1)));
            input.erase(0, input.find('/') + 1);
        } else if ('1' <= c && c <= '9') {
            score += std::stoi(input.substr(0, 1)) * 10;
            input.erase(0, 1);
        }
    }
    if (!input.empty()) 
        score += roll(std::istringstream(input));
    
    return score;
}

int main() {
    std::cout << "Enter your bowling scores: ";
    std::string input; 
    std::getline(std::cin, input);
    int result = bowlingScore(input);
    return 0;
}