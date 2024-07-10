#include <iostream>
#include <vector>
using namespace std;

int score(string s) {
    int totalScore = 0;
    int frame = 1;
    int i = 0;
    
    while (frame <= 10 && i < s.length()) {
        if (s[i] == 'X') {
            totalScore += 10;
            totalScore += (s[i+2] == 'X') ? 10 : (s[i+2] == '/') ? 10 - (s[i+1]-'0') : s[i+1]-'0' + s[i+2]-'0';
            i++;
        } else if (s[i] == '/') {
            totalScore += 10 - (s[i-1]-'0');
            totalScore += (s[i+1] == 'X') ? 10 : s[i+1]-'0';
        } else {
            totalScore += (s[i] == '-' ? 0 : s[i]-'0');
        }
        
        i++;
        if (s[i-1] == 'X' || s[i-1] == '/') frame++;
    }

    return totalScore;
}

int main() {
    string s;
    cin >> s;
    cout << score(s);
    return 0;
}