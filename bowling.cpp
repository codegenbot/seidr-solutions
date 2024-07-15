#include <iostream>
#include <string>

int bowlingScore(char c) {
    int score = 0;
    if (c == 'X') {
        score += 30;
    } else if (c == '/') {
        return score + 10; 
    } else {
        int count = 0;
        while (c >= '1' && c <= '9') {
            count *= 10;
            count += c - '0';
            c = (c < '7') ? ++c : '/';
        }
        score += count;
    }
    return score;
}

int main() {
    std::string s;
    std::cout << "Enter the input string: ";
    std::cin >> s;
    
    int totalScore = 0;
    for (char c : s) {
        totalScore += bowlingScore(c);
    }
    std::cout << "The total score is: " << totalScore << std::endl;
}