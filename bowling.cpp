#include <iostream>
using namespace std;

int bowlingScore(const char* s) {
    int score = 0;
    int currentRoll1 = 0;
    int currentRoll2 = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'X') {
            score += 30;
            currentRoll1++;
            if (currentRoll1 < 2) {
                // Add the score of the strike roll(s)
                int strikeRoll = bowlingScore(&s[i+1]);
                score += strikeRoll;
            }
        } else if (s[i] == '/') {
            score += 10 + currentRoll1;
            currentRoll1 = 0;
            currentRoll2 = 0;
            // Add the score of the spare roll
            int spareRoll = bowlingScore(&s[i+1]) - 10;
            score += spareRoll;
        } else {
            int roll = s[i] - '0';
            if (currentRoll1 == 0) {
                currentRoll1 = roll;
                currentRoll2 = 0;
            } else {
                currentRoll1 += roll;
                if (currentRoll1 < 10) {
                    currentRoll2 = roll;
                } else {
                    // Add the score of the rolls
                    score += currentRoll1 + currentRoll2;
                    currentRoll1 = 0;
                    currentRoll2 = 0;
                }
            }
        }
    }
    return score;
}

int main() {
    char s[100];
    cin.getline(s, 100);
    cout << "The bowling score is: " << bowlingScore(s) << endl;
    return 0;
}