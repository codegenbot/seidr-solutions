#include <string>
using namespace std;

int bowlingScore(string input) {
    int score = 0;
    int i = 0;
    while (i < 10) {
        if (input[i] == 'X') {
            score += 30;
            i++;
        } else if (input[i] == '/') {
            string subStr = input.substr(i, 2);
            int nextTwo = stoi(subStr);
            score += 10 + nextTwo;
            i += 3;
        } else {
            int currentRoll = stoi(input.substr(i, 2));
            i += 2;
            if (currentRoll == 10) {
                continue;
            }
            if (currentRoll < 10) {
                score += currentRoll;
            } else {
                score += currentRoll - 10 + 10;
            }
        }
    }
    return score;
}