#include <iostream>
#include <string>
using namespace std;

int score(const string& s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;
            total += (s[i + 1] == 'X') ? 10 : (s[i + 1] == '/' ? 10 - (s[i + 2] - '0') : s[i + 1] - '0');
            total += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 : s[i + 2] - '0');
            frame++;
            if (frame == 10) break;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            total += (s[i + 1] == 'X') ? 10 : s[i + 1] - '0';
            frame++;
            if (frame == 10) break;
        } else if (s[i] >= '0' && s[i] <= '9') {
            total += s[i] - '0';
        }
    }
    return total;
}