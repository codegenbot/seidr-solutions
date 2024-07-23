#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10 + bowlingScoreHelper(s, i+1);
        } else {
            int points = c - '0';
            if (i+2 < s.length() && s[i+2] != '/') {
                points += s[i+1] - '0';
                if (s[i+1] == '/') {
                    score += 10 + (points*10);
                } else {
                    if (points+10 > 10) {
                        score += 10;
                    } else {
                        score += points+10;
                    }
                }
            } else {
                score += points * 10;
            }
        }
    }
    return score;
}

int bowlingScoreHelper(string s, int i) {
    int score = 0;
    while (i < s.length() && s[i] != '/') {
        if (s[i] == 'X') {
            score += 30;
        } else {
            int points = s[i] - '0';
            score += points * 10;
        }
        i++;
    }
    return score;
}

int main() {
    string input = "XXXX/0/00"; 
    int score = bowlingScore(input);
    cout << "The score is: " << score << endl;
    return 0;
}