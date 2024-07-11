#include <iostream>
using namespace std;

int calculateScore(string s) {
    int total = 0;
    int frame = 0;
    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case 'X':
                total += 10;
                if (s[i+2] == 'X') {
                    total += 10;
                    if (s[i+4] == 'X') {
                        total += 10;
                    } else if (s[i+4] == '/') {
                        total += 10 - (s[i+3] - '0');
                    } else {
                        total += s[i+3] - '0' + s[i+4] - '0';
                    }
                } else if (s[i+3] == '/') {
                    total += 10;
                } else {
                    total += s[i+2] - '0' + s[i+3] - '0';
                }
                frame++;
                break;
            
            case '/':
                total += 10 - (s[i-1] - '0');
                break;
                
            default:
                total += s[i] - '0';
        }
        if (frame == 10) {
            break;
        }
    }
    return total;
}