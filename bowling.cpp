#include <vector>
#include <iostream>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    vector<int> rolls;
    for (char c : s) {
        if (c == '/') {
            score += calculateScore(rolls);
            rolls.clear();
        } else if (isdigit(c)) {
            rolls.push_back(c - '0');
        }
    }
    score += calculateScore(rolls);
    return score;
}

int calculateScore(vector<int> rolls) {
    int frameScore = 0, rollCount = 0;
    for (int roll : rolls) {
        if (roll == 10) {
            frameScore += 10;
            rollCount++;
        } else if (roll + rolls[1] >= 10) {
            frameScore += 10 - rolls[0];
            rollCount++;
        } else {
            frameScore += roll;
            rollCount++;
        }
    }
    return frameScore;
}

int main() {
    // test cases
    cout << bowlingScore("0") << endl; // output: 0
    cout << bowlingScore("XXXXXXXXXXXX") << endl; // output: 300
    cout << bowlingScore("5/5/5/5/5/5/5/5/5/5/5") << endl; // output: 150
    cout << bowlingScore("7115XXX548/279-X53") << endl; // output: 145
    cout << bowlingScore("532/4362X179-41447/5") << endl; // output: 100

    return 0;
}