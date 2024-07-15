#include <iostream>
#include <string>

int bowlingScore(char s[]) {
    int score = 0;
    if (s[0] == 'X') {
        score += 30;
    } else if (s[1] == '/') {
        int count = 10 - (s[0] - '0');
        score += count;
    } else {
        int count = 0;
        while (s[0] >= '1' && s[0] <= '9') {
            count *= 10;
            count += s[0] - '0';
            for (int i = 0; i < 3; ++i) {
                if (s[i] == '/') {
                    break;
                }
                else if (s[i] >= '1' && s[i] <= '9') {
                    count += s[i] - '0';
                }
            }
            for (int i = 3; i < 6; ++i) {
                if (s[i] == '/') {
                    break;
                } else if (s[i] >= '1' && s[i] <= '9') {
                    count += s[i] - '0';
                }
            }
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
    for (int i = 0; i < s.length(); ++i) { 
        totalScore += bowlingScore(&s[i]);
    }
    std::cout << "The total score is: " << totalScore << std::endl;
}