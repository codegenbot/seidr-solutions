#include <vector>
#include <iostream>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    bool inFrame = false;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '/') {
            inFrame = true;
        } else if(inFrame) {
            inFrame = false;
            if(s[i-1] != 'X') score += (s[i-1]-'0');
        }
    }
    return score;
}