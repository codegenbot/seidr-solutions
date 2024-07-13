```
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    istringstream ss(s);
    char c;
    bool strike = false;
    while (ss >> c) {
        if (c == 'X') {
            score += 30;
            strike = true;
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
    return score;
}

int main() {
    string input;
    cout << "Enter bowling scores: ";
    getline(cin, input);
    int result = bowlingScore(input);
    cout << "Total score: " << result << endl;
    return 0;