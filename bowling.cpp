#include <iostream>
using namespace std;

int score(string s);

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}

int score(string s) {
    int total = 0;
    int frame = 1;
    int i = 0;
    while (frame <= 10 && i < s.size()) {
        if (s[i] == 'X') {
            total += 10;
            if (i + 1 < s.size() && s[i + 1] == 'X') {
                total += 10;
            } else {
                total += (i + 1 < s.size() && s[i + 1] == '/' ? 10 : (i + 1 < s.size() ? s[i + 1] - '0' : 0));
            }
            if (i + 2 < s.size() && s[i + 2] == 'X') {
                total += 10;
            } else {
                total += (i + 2 < s.size() && s[i + 2] == '/' ? 10 : (i + 2 < s.size() ? s[i + 2] - '0' : 0));
            }
            i++;
        } else if (i + 1 < s.size() && s[i + 1] == '/') {
            total += 10;
            total += (i + 2 < s.size() && s[i + 2] == 'X' ? 10 : (i + 2 < s.size() ? s[i + 2] - '0' : 0));
            i += 2;
        } else {
            total += (s[i] == '-' ? 0 : s[i] - '0');
            total += (i + 1 < s.size() && s[i + 1] == '-' ? 0 : (i + 1 < s.size() ? s[i + 1] - '0' : 0));
            i += 2;
        }
        frame++;
    }
    return total;
}