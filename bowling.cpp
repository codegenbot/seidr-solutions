#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            if (s.find('/') != s.rfind('/')) {
                string temp = s.substr(s.find('/'), s.rfind('/') - s.find('/') + 1);
                int count = stoi(temp) * 2;
                if (stoi(temp) < 5) {
                    count += 10;
                } else {
                    score += 20;
                    roll++;
                }
                score += count;
            } else {
                string temp = s.substr(s.find('/'));
                int count = stoi(temp);
                score += 10 + count * 2;
            }
        } else {
            int count = (s[s.length() - 1] - '0') * 10 + (s[s.length() - 2] - '0');
            if (count < 10) {
                score += count;
            } else {
                score += 10 + (count - 10) * 2;
            }
        }
    }
    return score;
}