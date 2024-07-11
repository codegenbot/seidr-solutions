#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll1 = 0;
    int roll2 = 0;
    int roll3 = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(roll1 + roll2 < 10) {
                score += roll1 + roll2 + (10 - '0') - '0';
            } else {
                score += roll1 + roll2 + 10;
            }
            roll1 = roll2 = 0;
        } else if('0' <= s[i] && s[i] <= '9') {
            roll3 = roll3 * 10 + (s[i] - '0');
            if(roll1 == 0) {
                roll1 = roll2;
                roll2 = roll3;
                roll3 = 0;
            }
        } else if(s[i] == 'X') {
            score += 10;
            roll1 = roll2 = roll3 = 0;
        }
    }
    if(roll1 + roll2 > 0) {
        if(roll1 + roll2 < 10) {
            score += roll1 + roll2 + (10 - '0') - '0';
        } else {
            score += roll1 + roll2 + 10;
        }
    }
    return score;
}

int main() {
    std::string s;
    std::cout << "Enter a string representing the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> s;
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}