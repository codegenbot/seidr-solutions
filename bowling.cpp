#include <string>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            roll++;
        }
        else if (c == '/') {
            temp = "";
            continue;
        }
        else {
            temp += c;
        }
        if (temp.length() >= 2 && c != 'X') {
            int first, second;
            string t = temp;
            temp = "";
            sscanf(t.c_str(), "%d%d", &first, &second);
            score += first + second;
            roll++;
            while (roll < 10) {
                if (temp.length() >= 2 && c != 'X') {
                    int first1, second1;
                    string t1 = temp;
                    temp = "";
                    sscanf(t1.c_str(), "%d%d", &first1, &second1);
                    score += first1 + second1;
                    roll++;
                }
                else if (c == 'X' || c == '/') {
                    if (temp.length() >= 2) {
                        int first, second;
                        string t = temp;
                        temp = "";
                        sscanf(t.c_str(), "%d%d", &first, &second);
                        score += first + second;
                        roll++;
                    }
                    else {
                        score += 10;
                        roll++;
                    }
                }
            }
        }
    }
    return score;