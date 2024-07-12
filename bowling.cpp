#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int score = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i + 1] == 'X') {
                score += 10;
                if (i + 2 < s.size()) {
                    if (s[i + 2] == 'X') {
                        score += 10;
                    } else {
                        score += (s[i + 2] - '0');
                    }
                }
            } else {
                if (i + 2 < s.size()) {
                    if (s[i + 2] == '/') {
                        score += 10;
                    } else {
                        score += (s[i + 1] - '0') + (s[i + 2] - '0');
                    }
                }
            }
        } else if (s[i] == '/') {
            score += (10 - (s[i - 1] - '0')) + (i + 1 < s.size() ? (s[i + 1] == 'X' ? 10 : (s[i + 1] - '0')) : 0);
        } else if (s[i] >= '0' && s[i] <= '9') {
            score += (s[i] - '0');
        }
    }

    std::cout << score << std::endl;

    return 0;
}