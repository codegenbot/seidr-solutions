#include <cstring>

int main(int argc, char **argv) {
    // Your code here
}

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