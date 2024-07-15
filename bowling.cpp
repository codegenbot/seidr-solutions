#include <iostream>
#include <string>

int bowlingScore(char s[]) {
    int score = 0;
    if (s[0] == 'X') {
        score += 30;
    } else if (s[0] == '/') {
        int count = 10 - (s[1] - '0');
        score += count;
    } else {
        int count = 0;
        while (s[0] >= '1' && s[0] <= '9') {
            count *= 10;
            count += s[0] - '0';
            s++; 
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
        totalScore += bowlingScore(&s[0]);
    }
    std::cout << "The total score is: " << totalScore << std::endl;
}