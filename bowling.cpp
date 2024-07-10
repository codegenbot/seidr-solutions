#include <iostream>

using namespace std;

int score(string s) {
    int total = 0;
    int frame = 1;
    int bonus = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;
            if (frame < 10) {
                bonus += 2;
            }
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            if (frame < 10) {
                bonus++;
            }
            frame++;
        } else {
            total += s[i] - '0';
            if (bonus > 0) {
                total += s[i] - '0';
                bonus--;
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