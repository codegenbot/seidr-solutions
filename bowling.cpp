```cpp
#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        } else if (c == '/') {
            score += 10 + (roll * 10);
            roll = 0;
        } else {
            int temp = c - '0';
            if (roll < 2) {
                score += temp;
                roll++;
            } else {
                score += temp;
                if (temp + 10 > 10) {
                    score += 10;
                } else {
                    score += temp + 10;
                }
                roll = 0;
            }
        }
    }
    return score;
}

int main() {
    string input = "XXXX/0/00"; // Replace with user input or test case
    int score = bowlingScore(input);
    cout << "The score is: " << score << endl;
    return 0;
}