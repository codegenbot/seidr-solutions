#include <iostream>
#include <vector>
using namespace std;

int score(string s) {
    int totalScore = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            totalScore += 10;
            totalScore += (s[i+2] == 'X') ? 10 : (s[i+2] == '/' ? 10 - (s[i+1] - '0') : s[i+1] - '0');
            totalScore += (s[i+4] == 'X') ? 10 : (s[i+4] == '/' ? 10 - (s[i+3] - '0') : s[i+3] - '0');
            frame++;
            if (frame == 10)
                break;
            i++;
        } 
        else if (s[i] == '/') {
            totalScore += 10 - (s[i-1] - '0');
            totalScore += (s[i+1] == 'X') ? 10 : s[i+1] - '0';
            frame++;
            if (frame == 10)
                break;
        }
        else
            totalScore += s[i] - '0';
    }
    return totalScore;
}

int main() {
    string s;
    cin >> s;
    cout << score(s);
    return 0;
}