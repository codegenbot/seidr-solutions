#include <vector>
using namespace std;

int bowlingScore(string input) {
    int score = 0;
    int roll = 0;
    bool firstRollInFrame = true;
    
    for(int i = 0; i < input.size(); i++) {
        if(input[i] == 'X') {
            score += 10 + (firstRollInFrame ? 10 : 10);
            firstRollInFrame = false;
            roll = 0;
        } else if(input[i] == '/') {
            int currentRoll = stoi(string(1, input[i-1])) + stoi(string(1, input[i+1]));
            score += (firstRollInFrame ? currentRoll : 10);
            firstRollInFrame = false;
            roll = 0;
        } else if(isdigit(input[i])) {
            int value = input[i] - '0';
            roll += value;
            if(roll == 10) {
                score += 10;
                firstRollInFrame = true;
                roll = 0;
            }
        }
    }
    
    return score;
}