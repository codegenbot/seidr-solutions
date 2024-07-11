```c++
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            if(roll != 0) {
                score += roll;
                if(i+1<s.size() && (s[i+1]=='X' || (s[i+1]>='0' && s[i+1]<='9'))) {
                    roll = 10 - roll;
                } else {
                    roll = 10;
                }
            } 
            score += roll; 
            roll = 0;
        } else if('0' <= s[i] && s[i] <= '9') {
            int temp = (s[i]-'0');
            if(i+1<s.size() && s[i+1]=='X') {
                roll = 10;
            } else if(i+2<s.size() && (s[i+1]>='0' && s[i+1]<='9') && (s[i+2]>='0' && s[i+2]<='9')) {
                roll = temp * 10 + (s[i+1]-'0')*10 + (s[i+2]-'0');
            } else {
                roll = temp * 10 + (s[i+1]-'0');
            }
        } else if(s[i] == 'X') {
            score += 10;
            roll = 10;
        }
    }
    return score;
}