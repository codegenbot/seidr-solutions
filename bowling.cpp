#include <iostream>
#include <string>
#include <vector>

int get_score(const std::string& bowls) {
    int score = 0;
    char prev_ball = ' ';
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
            prev_ball = 'X';
        } else if (bowls[i] == '/') {
            score += 5;
            prev_ball = '/';
        } else if (bowls[i] == '-') {
            score -= 5;
            prev_ball = '-';
        } else {
            score += bowls[i] - '0';
            prev_ball = bowls[i];
        }
    }
    return score;
}

int main() {
    std::string bowls = "XXXXXXXXXX";
    int score = get_score(bowls);
    std::cout << "Score: " << score << std::endl;
    return 0;
}
```