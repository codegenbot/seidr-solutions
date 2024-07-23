#include <iostream>
using namespace std;

int score = 0;
string s = "X/X/5+7-3-1/2+4/X/2-8-X/2+6/X";

void bowling() {
    int i = 0, frameScore = 0;
    while(i < s.length()) {
        char c = s[i];
        if (c == '/') {
            frameScore += getRoll(s, i);
            score += frameScore;
            frameScore = 0;
        } else if (c == 'X' || c == 'x') {
            frameScore += min(i+1, 10);
            score += frameScore;
            frameScore = 0;
            i++;
            continue;
        } else if (isdigit(c)) {
            int roll = getRoll(s, i);
            if (s[i+1] == '+') {
                frameScore += roll + max(min(getBonusRoll(s, i) - roll - 1, 9), 0);
            } else {
                frameScore += roll;
            }
            score += frameScore;
            frameScore = 0;
        }
        i++;
    }
    cout << "Your total bowling score is: " << score << endl;
}

int getRoll(string s, int i) {
    if(i >= s.length() - 1) return 0; 
    if (s[i+1] == '/') {
        return 10;
    } else {
        for(int j = i + 1; ; j++) { 
            if (!isdigit(s[j])) {
                return min(j - i, 10);
            }
        }
    }
}

int getBonusRoll(string s, int i) {
    if(i >= s.length() - 1) return 0; 
    for(int j = i + 2; ; j++) { 
        if (!isdigit(s[j]) && (s[j] == '+' || s[j] == '-')) {
            return min(j - i - 1, 9);
        }
    }
}

int main() {
    bowling();
    return 0;
}