#include <string>

int bowlingScore(string input) {
    int score = 0;
    int i = 0;
    while(i < input.length()) {
        if(input[i] == 'X') {
            score += 30;
            i++;
        } else if(input[i] == '/') {
            char nextChar = input[i+1];
            if(nextChar == '/') {
                score += 10;
            } else {
                score += 10 + (nextChar - '0');
            }
            i += 2;
        } else {
            string roll = input.substr(i, 2);
            int currentRoll = (roll[0] == 'X') ? 10 : ((roll[1] == '/') ? 10 - (roll[0] - '0') : (roll[0] - '0'));
            if(currentRoll < 10) {
                score += currentRoll;
            } else {
                int first = (input[i] == 'X') ? 10 : (input[i+1] == '/') ? 10 - (input[i] - '0') : (input[i] - '0');
                int second = (input[i+1] == '/') ? 0 : ((input[i+2] == 'X') ? 10 : (input[i+2] - '0'));
                score += first + second;
            }
            i += 2;
        }
    }
    return score;
}