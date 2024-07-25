#include <vector>
using namespace std;

int bowlingScore(string bowls) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < bowls.length(); i++) {
        if (bowls[i] == 'X') {
            score += 30;
            currentFrame++;
        } else if (isdigit(bowls[i])) {
            int count = 0;
            while (i + 1 < bowls.length() && isdigit(bowls[i + 1])) {
                i++;
                count++;
            }
            score += (10 - count);
            currentFrame++;
        } else if (bowls[i] == '/') {
            int firstCount = 0;
            while (i + 1 < bowls.length() && isdigit(bowls[i + 1])) {
                i++;
                firstCount++;
            }
            int secondCount = 10 - firstCount;
            score += firstCount + secondCount;
            currentFrame++;
        }
    }
    return score;
}