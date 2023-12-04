#include <iostream>
#include <string>
#include <vector>

int get_score(const std::string& bowls) {
    int score = 0;
    std::vector<int> frameScores(10);
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            frameScores[i / 2] += 10;
        } else if (bowls[i] == '/') {
            frameScores[i / 2] += 5;
        } else if (bowls[i] == '-') {
            frameScores[i / 2] -= 5;
        } else {
            int ballValue = bowls[i] - '0';
            frameScores[i / 2] += ballValue;
        }
    }
    for (int i = 0; i < 10; i++) {
        score += frameScores[i];
    }
    return score;
}

int main() {
    std::string bowls = "52534463X-15/4-8-18";
    int score = get_score(bowls);
    std::cout << "Score: " << score << std::endl;
    return 0;
}