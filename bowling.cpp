#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int rollCount = 0;

    for (char c : s) {
        int cur = c - '0';
        if (c == '/') {
            if (currentRoll >= 10) {
                score += currentRoll + 10;
            } else {
                score += currentRoll + max(1, currentRoll);
            }
            currentRoll = 0;
            rollCount++;
        } else {
            currentRoll = 10 * currentRoll + cur;
        }
    }

    if (currentRoll >= 10) {
        score += currentRoll + 10;
    } else {
        score += currentRoll + max(1, currentRoll);
    }

    return score;
}

int main(int argc, char* argv[]) { 
    if(argc != 2) {
        cout << "Usage: bowlingScore <string>";
        return -1;
    }
    std::cout << bowlingScore(argv[1]) << '\n'; 
    return 0; 
}