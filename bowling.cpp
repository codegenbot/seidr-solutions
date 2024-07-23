#include <iostream>

int main() {
    std::string s;
    std::cin >> s;

    int total = 0;
    int frame = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            total += 10;
            total += (s[i + 1] == 'X') ? 10 : (s[i + 1] == '/' ? 10 - (s[i + 2] - '0') : s[i + 1] - '0');
            total += (s[i + 2] == 'X') ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 3] - '0') : s[i + 2] - '0');
            frame++;
            if (frame == 10) break;
        }
    }

    std::cout << total << std::endl;

    return 0;
}