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
    std::getline(std::cin, s);
    
    int totalScore = 0;
    for (char c : s) {
        if (c == 'X') {
            totalScore += bowlingScore(c);
        } else if (c == '/') {
            // Split this frame into two rolls, the first is 10 and the second is whatever.
            // You already know how to handle this in your code.
            totalScore += bowlingScore(c) + bowlingScore(s[1]);
            s.erase(0, 2);
        } else if (isdigit(c)) {
            int frameNumber = c - '0';
            if (frameNumber >= 7) {
                totalScore += 10;
            } else {
                totalScore += frameNumber + bowlingScore(s[1]);
                s.erase(0, 2);
            }
        }
    }
    std::cout << "The total score is: " << totalScore << std::endl;
}