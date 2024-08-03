#include <vector>
#include <iostream>
#include <string>

int bowlingScore(string s) {
    int score = 0;
    for(int i = 0; i < 10; i++) {
        if(s[i] == 'X' || (i != 9 && s[i+2] == '/')) { // If this frame is a strike or spare
            if(i == 9) score += 10; // For the last frame, it's always a strike
            else score += 10;
        }
        else {
            int rolls = (s[i] == '/') ? 2 : 3; 
            for(int j = 0; j < rolls; j++) {
                if(j == 0) score += (s[i] - '0') * 10 + (s[i+1] - '0');
                else if(s[i] == '/') score += s[i+1] - '0';
                else score += s[i] - '0';
            }
        }
    }
    return score;
}