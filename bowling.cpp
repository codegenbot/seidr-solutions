#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;

    for (char c : s) {
        if (c == '/') {
            if (currentRoll > 9)
                score += 10;
            else
                score += currentRoll;
            currentRoll = 0;
        } else if (isdigit(c)) {
            currentRoll = currentRoll * 10 + (c - '0');
        }
    }

    if (currentRoll > 0)
        score += currentRoll;

    return score;
}

int main() {
    string s = "1-2/3 4-5/6-7-8/9";
    int score = bowlingScore(s);
    cout << "The score is: " << score << endl;
    return 0;
}