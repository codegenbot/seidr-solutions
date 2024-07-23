```cpp
#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i] - '0';
        if (c == 10) {
            score += 30;
            roll++;
        } else if (s[i] == '/') {
            score += 10 + (roll * 10);
            roll = 0;
        } else {
            score += c;
            roll++;
            if (roll == 2) {
                if (c + 10 > 10) {
                    score += 10;
                } else {
                    score += c + 10;
                }
                roll = 0;
            }
        }
    }
    return score;
}

int main() {
    string input = "XXXX/0/00"; 
    int score = bowlingScore(input);
    cout << "The score is: " << score << endl;
    return 0;
}