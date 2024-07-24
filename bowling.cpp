#include <string>
#include <cctype>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 - (roll % 2 ? 1 : 5);
            roll++;
        } else if (isdigit(c)) {
            int count = c - '0';
            while (count--) {
                if (s[roll*2] == 'X' && s[roll*2+1] == 'X') {
                    score += 30;
                    roll+=2;
                    break;
                } else if (s[roll*2] == '/') {
                    score += 10 - (roll % 2 ? 1 : 5);
                    roll++;
                    count = 0;
                    break;
                } else {
                    score += 10;
                    roll++;
                }
            }
        }
    }
    
    return score;
}