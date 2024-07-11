#include <iostream>
#include <string>

int calculateBowlingScore(const std::string& s) {
    int total = 0;
    int frame = 0;

    for (int i = 0; i < s.size(); i++) {
        if ((s[i] == 'X') && frame < 10 && s[i + 2] != '/') {
            total += 10;
            total += (s[i + 1] == 'X' || s[i + 1] == '/') ? 10 : (s[i + 1] - '0');
            total += (s[i + 2] == 'X' || s[i + 2] == '/') ? 10 : (s[i + 2] - '0');
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0');
            total += (i + 1 < s.size() && s[i + 1] == 'X') ? 10 : (s[i + 1] - '0');
            frame++;
        } else if (s[i] >= '1' && s[i] <= '9') {
            total += s[i] - '0';
        }
    }

    return total;
}

int main() {
    std::string s;
    std::cin >> s;

    int total = calculateBowlingScore(s);

    std::cout << total << std::endl;
    return 0;
}