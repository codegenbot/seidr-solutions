```c++
#include <iostream>
using namespace std;

int main() {
    int score = 0, currentScore = 0, totalRolls = 0, inFrame = false, currentRolls = 0;
    char bowl[11];

    cout << "Enter the individual bowls: ";
    cin >> bowl;

    for(int i = 0; i < 10; i++) {
        if(bowl[i] != '/') {
            if(inFrame) {
                totalRolls++;
                if(bowl[i] == 'X') {
                    score += 30;
                    inFrame = false;
                } else if(bowl[i] - '0' <= 9) {
                    currentScore += bowl[i] - '0';
                    if(currentScore < 10) {
                        currentRolls++;
                    } else {
                        score += 10;
                        totalRolls++;
                        currentRolls = 0;
                    }
                }
            } else {
                if(bowl[i] == 'X') {
                    score += 30;
                    inFrame = true;
                    currentRolls = 2;
                } else if(bowl[i] - '0' <= 9) {
                    currentScore += bowl[i] - '0';
                    totalRolls++;
                    if(currentScore < 10) {
                        currentRolls = 1;
                    }
                }
            }
        }
    }

    if(!inFrame && currentScore >= 10) {
        score += 10;
    } else if(!inFrame) {
        score += currentScore;
    }

    return 0;
}