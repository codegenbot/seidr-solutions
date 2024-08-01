#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size() && frame < 10; ++i) {
        if (s[i] == 'X') {
            total += 10;
            if (s[i + 2] == 'X') {
                total += 10 + (s[i + 4] == 'X' ? 10 : s[i + 4] - '0');
            } else {
                total += (s[i + 2] == '/' ? 10 : s[i + 2] - '0') + (s[i + 3] == '/' ? 10 : s[i + 3] == '-' ? 0 : s[i + 3] - '0');
            }
            ++frame;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0') + (s[i + 1] == 'X' ? 10 : s[i + 1] == '-' ? 0 : s[i + 1] - '0');
            ++frame;
        } else if (s[i] == '-') {
            total += 0;
            ++frame;
        } else {
            total += s[i] - '0';
        }
    }
    cout << total << endl;
    return 0;
}