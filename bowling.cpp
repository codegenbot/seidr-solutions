```cpp
#include <iostream>
#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    string frame = "";
    for (char c : s) {
        if (c == ' ') {
            if (frame[0] == 'X' || frame.length() == 2 && frame[1] == '/') {
                score += 10;
            } else {
                int roll = 0;
                for (char d : frame) {
                    if (isdigit(d)) {
                        roll = roll * 10 + (d - '0');
                    }
                }
                if (roll > 9)
                    score += 10;
                else
                    score += roll;
            }
            frame = "";
        } else {
            frame += c;
        }
    }

    if (frame[0] == 'X' || frame.length() == 2 && frame[1] == '/') {
        score += 10;
    } else {
        int roll = 0;
        for (char d : frame) {
            if (isdigit(d)) {
                roll = roll * 10 + (d - '0');
            }
        }
        if (roll > 9)
            score += 10;
        else
            score += roll;
    }

    return score;
}

int main() {
    string s = "1-2/3 4-5/6-7-8/9";
    int score = bowlingScore(s);
    cout << "The score is: " << score << endl;
    return 0;
}