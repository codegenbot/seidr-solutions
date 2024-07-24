#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    string temp = "";
    for (char c : s) {
        temp += c;
        if (c == 'X' || (c == '/' && temp.back() != 'X')) {
            if (temp.length() == 1) {
                score += 30;
            } else {
                int count = temp.length();
                if (count > 2) {
                    score += (10 - (count % 2 ? 1 : 5)) * count;
                } else {
                    score += (10 - (count % 2 ? 1 : 5));
                }
            }
            roll++;
            temp = "";
        }
    }
    return score;