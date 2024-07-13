#include <iostream>
using namespace std;

int getBowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < s.size() && frame < 10; i++) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i + 1] == 'X') {
                score += 10;
                if (s[i + 2] == 'X') {
                    score += 10;
                } else if (s[i + 2] == '/') {
                    score += 10 - (s[i + 1] - '0');
                } else {
                    score += s[i + 2] - '0';
                }
            } else if (s[i + 2] == '/') {
                score += 10;
            } else {
                score += s[i + 1] - '0' + s[i + 2] - '0';
            }
            i++;
        } else if (s[i] == '/') {
            score += 10 - (s[i - 1] - '0');
        } else {
            score += s[i] - '0';
        }
        frame++;
    }
    return score;
}

int main() {
    string s;
    std::cin >> s;
    std::cout << getBowlingScore(s) << std::endl;
    return 0;
}