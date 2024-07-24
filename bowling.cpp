#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 30;
            roll++;
        } else if (s[i] == '/') {
            int j = i + 1;
            while (j < s.length() && s[j] != ' ') j++;
            int spare = 10 - stoi(s.substr(i+1, j-i-1).substr(1));
            score += spare;
            roll++;
            i = j;
        } else {
            string frame = "";
            while (i < s.length() && s[i] != '/') {
                frame += s[i];
                i++;
            }
            int count = stoi(frame);
            if (count == 10) {
                score += 10;
                roll++;
            } else {
                score += count + (10 - count);
                roll++;
            }
        }
    }
    return score;