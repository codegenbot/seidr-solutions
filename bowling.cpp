#include <iostream>
using namespace std;

int score(string s) {
    int total = 0;
    int frame = 1;
    int ball = 0;
    vector<int> points(22, 0);
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            points[ball] = 10;
            points[ball+1] = 0;
            ball += 2;
            frame++;
        } else if (s[i] == '/') {
            points[ball] = 10 - points[ball-1];
            ball++;
            frame++;
        } else if (s[i] == '-') {
            points[ball] = 0;
            ball++;
        } else {
            points[ball] = s[i] - '0';
            ball++;
            if (ball % 2 == 0) {
                if (points[ball-1] + points[ball-2] == 10) {
                    frame++;
                } else {
                    frame += 2;
                }
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (s[i] == 'X') {
            total += 10 + points[2*i+2] + points[2*i+3];
        } else if (s[i] == '/') {
            total += 10 + points[2*i+2];
        } else {
            total += points[2*i] + points[2*i+1];
        }
    }
    
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}