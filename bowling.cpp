#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            if (roll > 9 && s[i-1] != '/') {
                score += 10;
            } else if (roll + s[i+1] - '0' <= 10) {
                score += roll + s[i+1] - '0';
                roll = 0;
            } else {
                score += 10;
                roll = 0;
            }
        } else if (isdigit(s[i])) {
            roll *= 10;
            roll += s[i] - '0';
        }
    }

    if (roll > 9 && s[s.size()-2] != '/') {
        score += 10;
    } else if (roll + s[s.size()-1] - '0' <= 10) {
        score += roll + s[s.size()-1] - '0';
    } else {
        score += 10;
    }

    return score;
}

int main() {
    std::string s = "1-2/3 4-5/6-7-8/9";
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}