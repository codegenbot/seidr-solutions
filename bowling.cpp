#include <string>
using namespace std;

int bowlingScore(string input) {
    int score = 0;
    int i = 0;
    while(i < input.length()) {
        if(input[i] == 'X') {
            score += 30;
            i++;
        } else if(input[i] == '/') {
            int nextTwo = stoi(string(1, input[i+1]) + string(1, input[i+2]));
            score += 10 + nextTwo;
            i += 3;
        } else {
            int currentRoll = stoi(string(1, input[i]) + string(1, input[i+1]));
            if(currentRoll < 10) {
                score += currentRoll;
                i += 2;
            } else {
                int first = stoi(string(1, input[i]) + string(0));
                int second = stoi(string(1, input[i+1]) + string(1, input[i+2]));
                score += first + second;
                i += 2;
            }
        }
    }
}