#include <iostream>
#include <sstream>
#include <string>

int bowlingScore(string s) {
    int score = 0;
    stringstream ss(s);
    char c;
    while (ss >> c) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10 + (score / 10 - 1);
        } else {
            int temp = c - '0';
            score += temp;
        }
    }
    return score;
}