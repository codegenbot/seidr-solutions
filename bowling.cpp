#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10 + ((frame > 0) ? 10 : 0);
            frame++;
        } else if (isdigit(s[i])) {
            int pins = 0;
            for (; i < s.length() && isdigit(s[i]); i++) {
                pins *= 10;
                pins += s[i] - '0';
            }
            if (frame > 0) {
                score += pins + ((frame == 9) ? 10 : 0);
            } else {
                frame++;
            }
        }
    }
    
    return score;
}