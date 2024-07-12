#include <iostream>
#include <string>

int score(std::string s) {
    int total = 0;
    int idx = 0;
    for (int frame = 0; frame < 10; frame++) {
        if (s[idx] == 'X') {
            total += 10;
            if (s[idx + 2] == 'X') {
                total += 10 + 10;
            } else {
                total += (s[idx + 1] == 'X' ? 10 : s[idx + 1] - '0') + (s[idx + 2] == '/' ? 10 : s[idx + 2] - '0');
            }
            idx++;
        } else if (s[idx + 1] == '/') {
            total += 10 + (s[idx + 2] == 'X' ? 10 : s[idx + 2] - '0');
            idx += 2;
        } else {
            total += (s[idx] == '-' ? 0 : s[idx] - '0') + (s[idx + 1] == '-' ? 0 : s[idx + 1] - '0');
            idx += 2;
        }
    }
    return total;
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << score(s) << std::endl;
    return 0;
}