#include <iostream>
#include <string>
using namespace std;

int score(string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;
            if (frame < 9) {
                total += (s[i + 1] == 'X') ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
                total += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : (isdigit(s[i + 2]) ? s[i + 2] - '0' : 10));
                frame++;
            }
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            total += (s[i + 1] == 'X') ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
        } else if (isdigit(s[i])) {
            total += s[i] - '0';
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