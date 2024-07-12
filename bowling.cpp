#include <iostream>
using namespace std;

int score(string s) {
    int res = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            res += 10;
            if (frame < 9) {
                res += (s[i+1] == 'X') ? 10 : (s[i+1] - '0');
                res += (s[i+2] == 'X') ? 10 : (s[i+2] == '/' ? 10 - (s[i+1] - '0') : (s[i+2] - '0'));
            }
            frame++;
        } else if (s[i] == '/') {
            res += 10 - (s[i-1] - '0');
            res += (s[i+1] == 'X') ? 10 : (s[i+1] - '0');
        } else {
            res += (s[i] == '-') ? 0 : (s[i] - '0');
        }
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}