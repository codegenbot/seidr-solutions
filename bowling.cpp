#include <iostream>

void your_code_here() {
    std::string s;
    std::cin >> s;
    int total = 0;
    int frame = 0;

    for (int i = 0; i < s.size(); i++) {
        if (frame >= 10) {
            break;
        }

        if (s[i] == 'X') {
            total += 10;
            if (frame < 9) {
                total += (s[i + 1] == 'X') ? 10 : (s[i + 1] == '/' ? 10 - (s[i - 1] - '0') : s[i + 1] - '0');
                total += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 1] - '0') : s[i + 2] - '0');
            } else {
                total += (s[i + 1] == 'X') ? 10 : (s[i + 1] == '/' ? 10 - (s[i - 1] - '0') : s[i + 1] - '0');
                total += (s[i + 2] == 'X' ? (s[i + 3] == 'X' ? 10 : s[i + 3] - '0') : s[i + 2] - '0');
            }
            frame++;
            i++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            total += (s[i + 1] == 'X') ? 10 : s[i + 1] - '0';
            frame++;
        } else {
            total += (s[i] == '-') ? 0 : s[i] - '0';
            if (s[i] != '-') {
                frame++;
            }
        }
    }

    std::cout << total << std::endl;
}

int main() {
    your_code_here();

    return 0;
}