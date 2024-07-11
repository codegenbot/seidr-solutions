#include <iostream>
using namespace std;

int calculateScore(string s) {
    int total = 0;
    int frame = 1;
    int i = 0;

    while (frame <= 10) {
        switch (s[i]) {
            case 'X':
                total += 10;
                if (s[i + 2] == 'X') {
                    total += 10 + (s[i + 4] == 'X' ? 10 : (s[i + 4] - '0'));
                } else {
                    total += (s[i + 2] == '/' ? 10 : (s[i + 2] - '0' + s[i + 3] - '0'));
                }
                i++;
                break;
            case '/':
                total += 10 - (s[i - 1] - '0');
                total += (s[i + 1] == 'X' ? 10 : (s[i + 1] - '0'));
                i += 2;
                break;
            default:
                total += s[i] - '0' + s[i + 1] - '0';
                i += 2;
        }
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