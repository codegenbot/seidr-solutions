```c++
#include <string>

int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '/') {
            if(i+2 <= s.length() && (s[i+1]-'0' + s[i+2]-'0') >= 10) {
                score += 10 + (frame < 9 ? 10 : 0);
                frame++;
            } else {
                int strike = i;
                while(s[strike] == 'X' || s[strike] == '/') strike++;
                if(strike - i > 1) {
                    score += strike - i;
                }
                score += (frame < 9 ? 10 : 0);
                frame++;
            }
        } else if(s[i] == 'X') {
            score += 10;
            frame++;
        } else {
            int num = s[i]-'0';
            if(i+1 <= s.length() && s[i+1]-'0' > 0) {
                num *= 10 + (s[i+1]-'0');
                i++;
            }
            score += num;
            frame++;
        }
    }
    return score;
}