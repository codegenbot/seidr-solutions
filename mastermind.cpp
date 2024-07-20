#include <vector>
#include <iostream>
#include <string>

using namespace std;

int solve(const string& mastermindCode, const string& guess) {
    int whitePegs = 0;
    int blackPegs = 0;

    for (char c : mastermindCode) {
        int count = 0;
        for (char d : guess) {
            if (c == d) {
                count++;
                break; // Don't check this character again
            }
        }

        if (count > 0) {
            blackPegs++; // Correct color, correct place
        } else {
            int whiteCount = 0;
            for (char d : guess) {
                if (c == d) {
                    whiteCount++;
                }
            }
            whitePegs += whiteCount; // Correct color, wrong place
        }
    }

    return {blackPegs, whitePegs};
}