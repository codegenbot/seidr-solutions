#include <iostream>
#include <sstream>
#include <string>

int bowlingScore(string s) {
    int score = 0;
    stringstream ss(s);
    char c;
    string temp;
    while (ss >> c) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10 + (score / 10 - 1);
        } else {
            temp = "";
            while (c != '/' && c != 'X') {
                temp += c;
                ss >> c;
            }
            int val = stoi(temp);
            score += val;
        }
    }
    return score;
}