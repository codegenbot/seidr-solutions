#include <iostream>

using namespace std;

int score(string s) {
    int total = 0;
    int frame = 1;
    bool isSpare = false;
    bool isStrike = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;
            
            total += (frame < 10 ? (s[i + 1] == 'X' ? 10 : (s[i + 1] == '/' ? 10 - (s[i - 1] - '0') : s[i + 1] - '0')) : 0);
            total += (frame < 10 ? (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] == 'X' ? 10 : s[i + 1] - '0') : s[i + 2] - '0')) : 0);
            
            isStrike = true;
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            
            total += (frame < 10 && s[i + 1] != 'X' ? s[i + 1] - '0' : 0);
            
            isSpare = true;
            frame++;
        } else {
            total += s[i] - '0';
            
            total += (isStrike ? (s[i] - '0') * 2 : 0);
            total += (isSpare ? s[i] - '0' : 0);

            isStrike = false;
            isSpare = false;

            if (frame < 10) {
                total += (isSpare ? (s[i + 1] - '0') : 0);
                total += (isStrike && s[i + 1] != 'X' ? (s[i + 1] - '0') : 0);
            }

            frame++;
        }
    }

    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s);
    return 0;
}