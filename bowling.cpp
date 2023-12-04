#include <iostream>
using namespace std;
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
    char bowls[] = "XXXXXXXXX"; // Input string representing the individual bowls in a 10-frame round of 10 pin bowling
    int score = get_score(bowls);
    cout << "Score: " << score << endl;
    return 0;
}