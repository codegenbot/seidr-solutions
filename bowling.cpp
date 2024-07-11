#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while (i < s.length()) {
        if (s[i] == '/') {
            string firstRoll = s.substr(0, i);
            s.erase(0, i + 1);
            i = -1;
        }
        else if (i >= s.length() - 1 || s[i+1] != '/') {
            int roll = stoi(s.substr(i));
            if (roll > 10) {
                score += 10;
                s.erase(0, i+2);
                i = -1;
            } 
            else {
                score += roll;
                i++;
            }
        } 
        else {
            int firstRoll = stoi(s.substr(0, i+1));
            string secondRoll = s.substr(i+1);
            if (firstRoll +stoi(secondRoll) >= 10) {
                score += 10;
            } 
            else {
                score += firstRoll + stoi(secondRoll);
            }
            s.erase(0, i+2);
            i = -1;
        }
    }
    return score;
}