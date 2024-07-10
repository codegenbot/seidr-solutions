#include <iostream>
#include <vector>
using namespace std;

int score(string s) {
    int total = 0;
    int frame = 1;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;
            if (frame < 10) {
                total += (s[i + 2] == 'X') ? 10 : (s[i + 1] == 'X' ? 10 : (s[i + 1] - '0'));
                total += (s[i + 2] == 'X') ? 10 : (s[i + 2] - '0');
            }
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            if (frame < 10) {
                total += (s[i + 1] == 'X') ? 10 : (s[i + 1] - '0');
            }
            frame++;
        } else {
            total += (s[i] - '0');
            if (i < s.size() - 1 && s[i + 1] == '/') {
                total += 10 - (s[i] - '0');
            } else if (i < s.size() - 2 && s[i + 2] == 'X') {
                total += (s[i + 1] - '0' + 10);
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