#include <iostream>
using namespace std;

int score(string s) {
    int total = 0, frame = 0, ball = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;
            total += (s[i+2] == 'X' ? 10 : (s[i+2] == '/' ? 10 - (s[i+1]-'0') : s[i+1]-'0'));
            total += (s[i+4] == 'X' ? 10 : (s[i+4] == '/' ? 10 - (s[i+3]-'0') : s[i+3]-'0'));
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i-1]-'0');
            total += (s[i+1] == 'X' ? 10 : s[i+1]-'0');
            frame++;
        } else {
            total += s[i] - '0';
            if (++ball % 2 == 0) frame++;
        }
        if (frame == 10) break;
    }
    return total;
}

int main() {
    string s;
    std::cin >> s;
    std::cout << score(s) << std::endl;
    return 0;
}