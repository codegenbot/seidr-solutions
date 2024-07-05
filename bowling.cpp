#include <iostream>
using namespace std;

int bowlingScore(const char* s) {
    int score = 0;
    int currentRoll1 = 0;
    int currentRoll2 = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'X') {
            score += 30;
            if (currentRoll1 < 2) {
                currentRoll1++;
            } else {
                currentRoll2++;
            }
        } else if (s[i] == '/') {
            score += 10 + currentRoll1 * 2;
            if (currentRoll2 > 0) {
                score += currentRoll2;
            }
        } else {
            int roll = s[i] - '0';
            score += roll;
            currentRoll1++;
            if (currentRoll1 == 2) {
                score += roll * 2;
                currentRoll1 = 0;
                currentRoll2 = 0;
            }
        }
    }
    
    return score;
}

int main() {
    string input;
    cout << "Enter the bowling scores: ";
    getline(cin, input);
    int totalScore = bowlingScore(input.c_str());
    cout << "The total score is: " << totalScore << endl;
    return 0;
}