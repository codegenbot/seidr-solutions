#include <iostream>
#include <string>

using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            if (roll > 9)
                score += 10;
            else
                score += roll;
            roll = 0;
        } else if (isdigit(s[i])) {
            string str = to_string(roll) + "0";
            s.insert(i, 0, str);
            i += str.length();
            roll = 0;
            for (int j = i; isdigit(s[j]); j++) {
                roll *= 10;
                roll += s[j] - '0';
            }
        }
    }

    if (roll > 9)
        score += 10;
    else
        score += roll;

    return score;
}

int main() {
    string s = "1-2/3 4-5/6-7-8/9";
    int score = bowlingScore(s);
    cout << "The score is: " << score << endl;
    return 0;
}