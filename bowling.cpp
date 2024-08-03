#include <string>

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while(i<s.length()) {
        if(s[i] == 'X') {
            score += 30;
            i++;
        } else if(s[i] == '/') {
            int left = (s[i-1]-'0');
            int right = (s[i+1]-'0');
            score += left + right;
            i+=2;
        } else {
            int count = (s[i]-'0');
            for(int j=0; j<count; j++) {
                if(i+1 >= s.length() || s[i+1] == 'X') {
                    score += 10;
                    break;
                } else if(s[i+1] == '/') {
                    int left = (s[i+2]-'0');
                    int right = (s[i+3]-'0');
                    score += 10 + left + right;
                    i+=3;
                    break;
                }
            }
            i++;
        }
    }
    return score;
}