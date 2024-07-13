#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    bool strike = false;
    int strikeCount = 0;
    if (s.empty()) {
        return score; 
    }
    istringstream ss(s);
    char c;
    while (ss >> c) {
        if (c == 'X') {
            score += 30;
            strike = true;
            strikeCount++;
        } else if (c == '/') {
            if (!strike) {
                score += 10 + (score / 10 - 1);
            }
            strike = false;
        } else {
            int temp = c - '0';
            if (strike) {
                score += temp * 2;
                strike = false;
            } else {
                score += temp;
            }
        }
    }
    // Update the total score for multiple strikes
    score += strikeCount * 10;
    return score;
}

int main() {
    string input;
    cout << "Enter bowling scores: ";
    getline(cin, input);
    int result = bowlingScore(input);
    cout << "Total score: " << result << endl;
    return 0;
}