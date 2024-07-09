#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    std::string::iterator it = s.begin();
    while (it != s.end()) {
        if (*it == 'X') {
            score += 10 + (it + 1 == s.end() || (*(it + 1) == '/' || *(it + 1) == 'X') ? 0 : std::stoi(std::string(1, *++it)));
            it += 2;
        } else if (*it == '/') {
            score += 10 + (it + 1 == s.end() ? 0 : std::stoi(std::string(1, *++it)));
            break;
        } else {
            int roll = 0;
            while (it != s.end() && !(*it == '/' || *it == 'X')) {
                roll = roll * 10 + (*it - '0');
                it++;
            }
            if (*it == '/') {
                score += roll + 10;
            } else {
                score += roll;
            }
        }
    }
    return score;