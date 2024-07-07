```cpp
#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int rollCount = 0;

    for (char c : s) {
        if (c == '/') {
            if (rollCount < 9) {
                score += max(10, currentRoll);
            } else {
                score += currentRoll + max(10, currentRoll);
            }
            currentRoll = 0;
            rollCount++;
        } else if (isdigit(c)) {
            currentRoll *= 10;
            currentRoll += c - '0';
        }
    }

    if (rollCount == 10) {
        score += max(10, currentRoll) + max(10, currentRoll);
    } else if (rollCount == 9 && currentRoll > 8) {
        score += max(10, currentRoll) * 2;
    } else {
        score += currentRoll;
    }

    return score;
}

int main() {
    string s = "1/2 3-4 5/6 /7 8/9";
    int score = bowlingScore(s);
    cout << "Score: " << score << endl;
    return 0;
}