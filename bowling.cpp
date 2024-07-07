#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int rollCount = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            if (currentRoll >= 10) {
                score += currentRoll + 10;
            } else {
                score += currentRoll + max(1, currentRoll);
            }
            currentRoll = 0;
            rollCount++;
        } else if (isdigit(s[i])) {
            currentRoll *= 10;
            currentRoll += s[i] - '0';
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