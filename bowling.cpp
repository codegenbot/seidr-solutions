
#include <iostream>
#include <string>
#include <vector>

int get_score(const std::string& bowls) {
    int score = 0;
    char prev_ball = ' ';
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X' || bowls[i] == '/') {
            score = 0;
            break;
        } else if (bowls[i] == '-') {
            score -= 5;
        } else {
            score += bowls[i] - '0';
        }
    }
    return score;
}

int main() {
    std::string bowls = "52534463X-15/4-8-18";
    int score = get_score(bowls);
    std::cout << "Score: " << score << std::endl;
    return 0;
}