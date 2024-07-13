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
            score += 10 + (roll - 1);
            roll = 0;
        } else {
            int temp = c - '0';
            if (roll > 0) {
                score += temp;
                roll--;
            } else {
                score += temp * 2;
            }
        }
    }
    return score;
}

int main() {
    string s;
    cout << "Enter the string representing the individual bowls: ";
    cin >> s;
    cout << "The score for this round is: " << bowlingScore(s) << endl;
    return 0;
}