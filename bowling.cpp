#include <iostream>

int bowlingScore(char c) {
    int score = 0;
    if (c == 'X') {
        score += 30;
    } else if (c == '/') {
        return score + 10; 
    } else {
        int count = c - '0';
        score += count;
    }
    return score;
}

int main() {
    std::cout << "Enter the input string: ";
    char s;
    std::cin >> s;
    
    int totalScore = bowlingScore(s);
    std::cout << "The total score is: " << totalScore << std::endl;
}