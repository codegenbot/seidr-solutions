#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int strikeCount = 0; // count the number of consecutive strikes

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') { // check if the current frame is a spare
            int thisRoll, nextRoll;
            if (isdigit(s[i - 1])) {
                thisRoll = s[i - 1] - '0';
            } else {
                thisRoll = 10 - (s[i - 2] - '0');
            }
            if (isdigit(s[i + 1])) {
                nextRoll = s[i + 1] - '0';
            } else {
                nextRoll = 10 - (s[i] - '0');
            }
            score += thisRoll + nextRoll;
        } else if (s[i] == 'X') { // check if the current frame is a strike
            score += 10; // add 10 points for the strike
            strikeCount++; // increment the strike count
        } else {
            int roll = s[i] - '0';
            score += roll;
        }
    }

    // calculate bonuses for strikes in subsequent frames
    while (strikeCount > 0) {
        score += 10; // add 10 points for each strike
        strikeCount--;
    }

    return score;
}

int main() {
    string s = "9-X/6-1-5-3-2-8-9";
    int score = bowlingScore(s);
    cout << "The score is: " << score << endl;
    return 0;
}