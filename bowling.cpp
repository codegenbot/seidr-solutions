#include <iostream>

using namespace std;

int score(string s) {
    int total = 0;
    int frame = 1;
    bool isSpare = false;
    bool isStrike = false;
    int strikeCount = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;

            if (frame < 10) {
                if (strikeCount == 2) {
                    total += 10;
                } else if (strikeCount == 1) {
                    total += 10 - (s[i - 2] - '0');
                }
                strikeCount++;
            }

            isStrike = true;
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');

            if (frame == 9) {
                total += (s[i + 1] == 'X' ? 10 : s[i + 1] - '0');
            }

            isSpare = true;
            frame++;
        } else {
            total += s[i] - '0';

            if (isSpare) {
                total += s[i] - '0';
            } else if (isStrike) {
                total += (s[i] - '0');
            }

            isSpare = false;
            isStrike = false;
            strikeCount = 0;

            if (frame < 10) {
                if (isSpare) {
                    total += s[i + 1] - '0';
                } else if (isStrike) {
                    total += (s[i + 1] == 'X' ? 10 : s[i + 1] - '0');
                }
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