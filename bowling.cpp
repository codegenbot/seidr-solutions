#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int i = 0;
    while(i < s.length()) {
        if(s[i] == 'X') {
            score += 30;
            i++;
        } else if(s[i] == '/') {
            i++; // skip '/'
            for(int j = 0; j < 2; j++) {
                if(i >= s.length()) break;
                if(isdigit(s[i])) {
                    int pins = s[i] - '0';
                    score += (10 - pins);
                    i++;
                    break;
                } else {
                    i++;
                }
            }
        } else {
            int pins = 0;
            for(int j = 0; j < 2; j++) {
                if(i >= s.length()) break;
                if(s[i] == '/') {
                    i++; // skip '/'
                    for(int k = 0; k <= 1; k++) {
                        if(i >= s.length()) break;
                        if(isdigit(s[i])) {
                            int p = s[i] - '0';
                            pins += p;
                            i++;
                            break;
                        } else {
                            i++;
                        }
                    }
                    break;
                } else if(isdigit(s[i])) {
                    pins += (s[i] - '0');
                    i++;
                } else {
                    i++;
                }
            }
            score += pins;
        }
    }
    return score;
}