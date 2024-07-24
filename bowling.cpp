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
            if (s[s.find('/')-1] != 'X') {
                score += 10 - (roll % 2);
                roll++;
            }
        } else {
            int count = s.find('/') - s.find('0');
            score += count;
            roll++;
        }
    }
    return score;
}