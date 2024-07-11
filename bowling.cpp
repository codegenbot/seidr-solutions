#include <string>

int bowlingScore(string s) {
    int score = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(i+1 < s.size() && (s[i+1] >= '0' && s[i+1] <= '9')) {
                score += (10 - (s[i+1]-'0')) + (i==0 ? 20 : 10);
            } else if(s[i-1] == 'X') {
                score += 10;
            }
            i++;
        } 
        else if('0' <= s[i] && s[i] <= '9') {
            int roll = s[i]-'0';
            if(i+2 < s.size() && (s[i+1]=='0' || s[i+1]=='X')) {
                score += 10 + roll;
                i+=2;
            } else if(i+1<s.size()) {
                score += roll;
                i++;
            }
        } 
    return score;
}