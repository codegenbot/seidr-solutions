#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    bool firstRoll = true;
    for (char c : s) {
        if (c == 'X') {
            score += 10;
            firstRoll = false;
        } else if (c == '/') {
            if (!firstRoll) score -= 5;
            firstRoll = false;
        } else if (c == '+') {
            score += 5;
        } else if (isdigit(c)) {
            int strike = c - '0';
            if (strike > 9 || !firstRoll) score -= strike;
            if (!firstRoll) score += strike;
        }
    }
    return score;
}

int main() {
    int score = bowlingScore("X/XXXX/8+5,X");
    cout << "The score is: " << score << endl;
    return 0;
}