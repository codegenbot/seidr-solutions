#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    string::iterator it = s.begin();
    while (it != s.end()) {
        if (*it == 'X') {
            score += 10;
            it++;
            if (it != s.end() && (*it == 'X' || *it == '/')) {
                score += 15;
            }
        } else if (*it == '/') {
            score += 10;
            int roll = stoi(string(1, *++it));
            score += roll;
        } else {
            int roll = 0;
            while (it != s.end() && !(*it == '/' || *it == 'X')) {
                roll = roll * 10 + (*it - '0');
                it++;
            }
            if (roll > 10) {
                score += 10;
                score += roll - 10;
            } else {
                score += roll;
            }
        }
    }
    return score;
}

int main() {
    string s = "X/X/5-4/10/-9/-8/X/X/6+3/7-2";
    int result = bowlingScore(s);
    cout << result << endl;
    return 0;
}