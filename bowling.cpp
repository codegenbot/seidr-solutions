#include <string>
#include <iostream>

int bowlingScore(std::string s) {
    int score = 0;
    std::string::iterator it = s.begin();
    while (it != s.end()) {
        if (*it == 'X') {
            score += 10;
            for (; it + 1 != s.end(); ++it) {
                if (*it == 'X' || *it == '/') {
                    break;
                }
                score += *it - '0';
            }
        } else if (*it == '/') {
            int spare = 10 + std::stoi(std::string(1, *++it));
            score += spare;
            while (it + 1 != s.end() && *it == '/') {
                score += 10;
                ++it; 
            }
        } else {
            int roll = 0;
            while (it != s.end() && !(*it == '/' || *it == 'X')) {
                roll = roll * 10 + (*it - '0');
                it++;
            }
            if (*it == '/') {
                score += roll + 10;
                it++; 
                while (it != s.end() && *it == '/') {
                    score += 10; // handle multiple spare rows
                    it++; 
                }
            } else {
                int roll2 = *it - '0';
                score += 10 + roll;
                it++; 
            }
        }
    }
    return score;
}

int main() {
    return 0;
}