#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll1 = 0; 
    int roll2 = 0; 
    bool isStrike = false;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == 'X') {
            score += 30;
            isStrike = true;
        } else if (c == '/') {
            score += 10;
            roll1 = c - '0';
        } else {
            score += (c - '0');
            if (!isStrike) {
                roll2 = c - '0';
            } else { 
                score += 30;
                isStrike = false;
            }
        }
        if (i >= s.length() - 2) {
            if (s[i] == 'X' && s[i + 1] == 'X') {
                score += 30;
            } else if (s[i] == 'X') {
                score += 30;
                score += roll1 * 2 + c - '0';
            }
        }
    }

    return score;
}

int main() {
    std::cout << "Enter the bowling scores: ";
    std::string input;
    std::getline(std::cin, input);
    int result = bowlingScore(input);
    std::cout << "The total score is: " << result << std::endl;
    return 0;
}