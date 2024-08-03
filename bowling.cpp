#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            frame++;
        } else if (c == '/') {
            string leftSide = s.substr(0, s.find('/'));
            string rightSide = s.substr(s.find('/'), 2);
            
            int totalPins = stoi(leftSide) + stoi(rightSide);
            score += 10 - totalPins;
            frame++;
            s.erase(0, s.find('/') + 2);
        } else {
            int pins = c - '0';
            score += pins;
            if (pins < 10) {
                s.erase(0, 1);
                
                if (!s.empty() && s[0] == '/') {
                    string leftSide = s.substr(0, s.find('/'));
                    string rightSide = s.substr(s.find('/'), 2);
                    
                    int totalPins = stoi(leftSide) + stoi(rightSide);
                    score += 10 - totalPins;
                    frame++;
                    s.erase(0, s.find('/') + 2);
                }
            } else {
                frame++;
            }
        }
    }
    
    return score;
}