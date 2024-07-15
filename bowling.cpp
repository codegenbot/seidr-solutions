#include <iostream>

int bowlingScore(char c) {
    int score = 0;
    if (c == 'X') {
        return 30;
    } else if (c == '/') {
        return 10; 
    } else {
        return c - '0';
    }
}

int main() {
    std::cout << "Enter the input string: ";
    char c;
    int totalScore = 0;
    while ((c = std::cin.get()) != '\n') {
        totalScore += bowlingScore(c);
    }
    std::cout << "The total score is: " << totalScore << std::endl;
}