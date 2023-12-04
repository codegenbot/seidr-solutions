#include <string>
#include <vector>

int get_score(const std::string& bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
        } else if (bowls[i] == '/') {
            score += 5;
        } else if (bowls[i] == '-') {
            score -= 5;
        } else {
            score += bowls[i] - '0';
        }
    }
    return score;
}