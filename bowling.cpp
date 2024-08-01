#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2, prevFrameScore;
    
    for(int i = 0; i < 10; i++) {
        if(s[i] == 'X') {
            // Strike
            score += 10 + getBonusForNextTwoFrames(s, i);
            prevFrameScore = 10;
        } else if(s[i+1] == '/') {
            // Spare
            roll1 = s[i] - '0';
            roll2 = s[i+2] - '0';
            score += 5 + (roll1 + roll2);
            prevFrameScore = 5 + (roll1 + roll2);
        } else {
            // Normal frame
            roll1 = s[i] - '0';
            roll2 = s[i+1] - '0';
            score += roll1 + roll2;
            prevFrameScore = roll1 + roll2;
        }
    }
    
    return score;
}

int getBonusForNextTwoFrames(string s, int i) {
    if(i < 8) {
        // Next two frames are normal
        return s[i+2] - '0' + s[i+3] - '0';
    } else if(s[i+1] == 'X') {
        // Next frame is strike
        return 10;
    } else {
        // Next frame is spare or normal
        return s[i+2] - '0' + s[i+3] - '0';
    }
}

int main() {
    string input;
    cout << "Enter the bowling score: ";
    cin >> input;
    cout << "The bowling score is: " << bowlingScore(input) << endl;
    return 0;
}