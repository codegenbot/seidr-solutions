#include <iostream>
#include <string>

int calculateBonus(const std::string& s, int index) {
    if (s[index] == 'X') {
        return 10;
    } else if (s[index] == '/') {
        return 10 - (s[index - 1] - '0');
    } else if (s[index] == '-') {
        return 0;
    } else {
        return s[index] - '0';
    }
}

int score(std::string s) {
    int total = 0;
    int roll = 1;

    for (int i = 0; i < s.size() && roll <= 10; i++) {
        if (s[i] == 'X') {
            total += 10 + calculateBonus(s, i + 1) + calculateBonus(s, i + 2);
            roll++;
        } else if (s[i] == '/') {
            total += 10 - (s[i - 1] - '0') + calculateBonus(s, i + 1);
            roll++;
        } else if (s[i] != '-' && s[i] != '|') {
            total += s[i] - '0';
            if (s[i] != 'X' && s[i] != '|') {
                roll++;
            }
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