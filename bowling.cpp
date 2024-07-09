#include <string>
using namespace std;

int bowlingScore(string input) {
    int score = 0;
    int i = 0;
    for (int frame = 1; frame <= 10; frame++) {
        if (input[i] == 'X') {
            score += 30;
            i++;
            continue;
        } else if (input.substr(i, 1) == "X") {
            i++;
            int nextRoll = stoi(input.substr(i, 1));
            score += 10 + nextRoll;
            i++;
            continue;
        } else if (input[i] == '/') {
            i++;
            int nextTwo = stoi(input.substr(i, 2));
            score += 10 + nextTwo / 2;
            i += 2;
            continue;
        }
        int currentRoll1 = stoi(input.substr(i, 1));
        i++;
        if (input[i] == '0') {
            int currentRoll2 = stoi(input.substr(i, 1));
            score += currentRoll1 + currentRoll2;
            i++;
        } else {
            score += currentRoll1;
        }
    }
    return score;