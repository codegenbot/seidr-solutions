#include <iostream>
#include <string>

int bowlingScore(char c) {
    int score = 0;
    if (c == 'X') {
        score += 30;
    } else if (c == '/') {
        static char prevChar = '\0';
        int count = 10 - (prevChar - '0');
        score += count;
        prevChar = c; 
    } else {
        int count = 0;
        while (c >= '1' && c <= '9') {
            count *= 10;
            count += c - '0';
            c = '\0'; 
        }
        score += count;
    }
    return score;
}

int main() {
    std::string s; 
    std::cout << "Enter the input string: ";
    std::getline(std::cin, s);
    
    int totalScore = 0;
    for (char c : s) { 
        totalScore += bowlingScore(c);
    }
    std::cout << "The total score is: " << totalScore << std::endl;
}