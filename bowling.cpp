#include <iostream>
#include <vector>

int calculateBowlingScore(const std::vector<int>& scores) {
    int total = 0;

    for (int i = 0; i < 10; i++) {
        if (scores[i * 2] == 10) {
            total += 10 + scores[i * 2 + 1] + scores[i * 2 + 2];
            if (scores[i * 2 + 1] == 10 && scores[i * 2 + 2] != 0 && i < 9) {
                total += scores[i * 2 + 3];
            }
        } else if (scores[i * 2] + scores[i * 2 + 1] == 10) {
            total += 10 + scores[i * 2 + 2];
        } else {
            total += scores[i * 2] + scores[i * 2 + 1];
        }
    }

    return total;
}

int main() {
    std::vector<int> scores(23); // Assuming 'scores' is provided as input

    int result = calculateBowlingScore(scores);
    std::cout << result << std::endl;

    return 0;
}