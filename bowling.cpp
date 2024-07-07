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
    string s;
    cout << "Enter the bowling scores: ";
    cin >> s;
    cout << "The total score is: " << bowlingScore(s);
    return 0;
}