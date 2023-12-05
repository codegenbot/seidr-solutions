#include <iostream>
#include <cstring>

int get_score(const char *bowls) {
    int score = 0;
    char prev_ball = ' ';
    for (int i = 0; i < strlen(bowls); i++) {
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
    char bowls[10]; // 10-frame round of 10 pin bowling
    std::cout << "Enter a string representing the individual bowls in a 10-frame round of 10 pin bowling: ";
    std::cin >> bowls;
    int score = get_score(bowls);
    std::cout << "The score for this round is: " << score << std::endl;
    return 0;
}