#include <iostream>
#include <string>

using namespace std;

int score(string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            total += (i + 1 < s.size() && frame < 9) ? (s[i + 1] == 'X' ? 10 : (s[i + 1] - '0')) : 0;
            if (frame < 9) {
                i += 2; // Skip next two characters
            }
            frame++;
        } else if (s[i] == 'X') {
            total += 10;
            if (frame < 9) {
                if (i + 2 < s.size()) {
                    total += (s[i + 1] == 'X') ? 10 : (s[i + 1] - '0');
                    if (s[i + 1] == 'X') {
                        total += (s[i + 2] == 'X') ? 10 : (s[i + 2] - '0');
                        if (s[i + 2] == 'X' && i + 3 < s.size()) {
                            total += (s[i + 3] == 'X') ? 10 : (s[i + 3] - '0');
                        }
                    } else {
                        total += (s[i + 2] == 'X') ? 10 : (s[i + 2] - '0');
                    }
                }
            }
            frame++;
        } else if (s[i] == '-') {
            total += 0;
        } else {
            total += (s[i] - '0');
            if (frame < 9 && i + 1 < s.size() && s[i + 1] == '/') {
                total += 10 - (s[i] - '0');
                i += 2; // Skip next two characters
            }
        }
        if (s[i] == 'X') { frame++; }
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}