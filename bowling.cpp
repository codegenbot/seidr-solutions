#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    string rolls[] = {"0", "1/2", "3-4", "5/6", "7", "8/9"};
    for (string roll : rolls) {
        if (roll.find('/') != string::npos) {
            int firstRoll = stoi(roll.substr(0, roll.find('/')));
            int secondRoll = 10 - firstRoll;
            score += firstRoll + secondRoll;
        } else if (isdigit(roll[0])) {
            int frameScore = stoi(roll);
            score += frameScore;
        }
    }
    return score;
}

int main() {
    string s = "1/2 3-4 5/6 /7 8/9";
    int score = bowlingScore(s);
    cout << "Score: " << score << endl;
    return 0;
}