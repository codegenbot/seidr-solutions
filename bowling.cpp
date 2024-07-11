#include <iostream>
using namespace std;

int calculateScore(string s) {
    int total = 0;
    int frame = 0;
    int i = 0;
    while (frame < 10) {
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
                    i += 2;
                } else if (s[i+3] == '/') {
                    total += 10;
                    i += 3;
                } else {
                    total += s[i+2] - '0' + s[i+3] - '0';
                    i += 2;
                }
                break;
            case '/':
                total += 10 - (s[i-1] - '0');
                break;
            default:
                total += s[i] - '0';
                break;
        }
        i++;
        frame++;
    }
    return total;
}

int main() {
    string s;
    std::cin >> s;
    std::cout << calculateScore(s) << endl;
    return 0;
}