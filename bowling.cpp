#include <iostream>
using namespace std;

int calculateScore(string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            total += 10;
            if (i + 2 < s.size() && s[i+2] == 'X') {
                total += 10;
            } else if (i + 3 < s.size() && s[i+3] == '/') {
                total += 10;
            } else if (i + 2 < s.size()) {
                if (s[i+1] != '/') {
                    total += s[i+1] - '0';
                }
                if (i + 3 < s.size() && s[i+2] != '/') {
                    total += s[i+2] - '0';
                }
            }
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i-1] - '0');
            if (i + 1 < s.size() && s[i+1] != 'X') {
                total += s[i+1] - '0';
            }
            frame++;
        } else if (s[i] >= '1' && s[i] <= '9') {
            total += s[i] - '0';
            frame++;
        }
        if (frame == 10) {
            break;
        }
    }
    return total;
}

int main() {
    string s;
    std::cin >> s;
    std::cout << calculateScore(s) << endl;
    return 0;
}