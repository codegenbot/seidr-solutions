#include <iostream>

void your_code_here() {
    std::string s;
    std::cin >> s;
    int total = 0;
    int frame = 0;

    for (int i = 0; i < s.size(); i++) {
        if ((s[i] == 'X' || s[i] == '/') && frame < 10) {
            total += 10;

            if (s[i + 1] == 'X') {
                total += 10;
                if (s[i + 2] == 'X') {
                    total += 10;
                } else if (s[i + 2] == '/') {
                    total += (10 - (s[i + 1] - '0'));
                } else {
                    total += (s[i + 2] - '0');
                }
            } else if (s[i + 1] == '/') {
                total += 10;
            } else {
                total += (s[i + 1] - '0');
                total += (s[i + 2] == 'X') ? 10 : (s[i + 2] - '0');
            }
            frame++;
        }
    }

    std::cout << total << std::endl;
}

int main() {
    your_code_here();

    return 0;
}