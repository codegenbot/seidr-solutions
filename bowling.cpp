#include <iostream>
#include <string>

int bowlingScore(std::string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            score += (i < s.size() - 1 && s[i + 1] == 'x') ? 10 : roll1 + ((roll2 > 0) ? roll2 : 10);
            roll1 = roll2 = 0;
        } else if (isdigit(s[i])) {
            if (roll1 == 0)
                roll1 = s[i] - '0';
            else
                roll2 = roll2 * 10 + s[i] - '0';
        }
    }

    score += roll1 + roll2;

    return score;
}

int main() {
    std::string s = "9-3/161516135228-9/x";
    int score = bowlingScore(s);
    std::cout << "The score is: " << score << std::endl;
    return 0;
}