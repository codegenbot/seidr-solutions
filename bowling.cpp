#include <iostream>
using namespace std;

int score(string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] == 'X') && frame < 10) {
            total += 10;
            total += (s[i + 1] == 'X' || s[i + 1] == '/') ? 10 : (s[i + 1] - '0');
            total += (s[i + 2] == 'X' || s[i + 2] == '/') ? 10 : (s[i + 2] - '0');
            frame++;
        } else if ((s[i] == '/') && i > 1 && frame < 10) {
            total += 10 - (s[i - 1] - '0') + (s[i + 1] == 'X' || s[i + 1] == '/' ? 10 : s[i + 1] - '0');
            frame++;
        } else if ((s[i] >= '0' && s[i] <= '9') && frame < 10) {
            total += s[i] - '0';
            if (s[i + 1] == '/') {
                total += 10 - (s[i] - '0');
            }
        }
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << "\n";
    return 0;
}