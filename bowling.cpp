#include <string>
using namespace std;

int bowlingScore(std::string input) {
    int score = 0;
    int i = 0;
    while(i < input.length()) {
        if(input[i] == 'X') {
            score += 30;
            i++;
        } else if(input[i] == '/') {
            int nextTwo = stoi(input.substr(i + 1, 2));
            score += 10 + nextTwo;
            i += 3;
        } else {
            int currentRoll = stoi(input.substr(i, 2));
            if(currentRoll < 10) {
                score += currentRoll;
                i += 2;
            } else {
                int first = stoi(input.substr(i, 1));
                int second = stoi(input.substr(i + 1, 1));
                score += first + second;
                i += 2;
            }
        }
    }
    return score;
}