#include <string>
#include <cmath>
using namespace std;
int getScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
        } else if (bowls[i] >= '0' && bowls[i] <= '9') {
            score += pow(2, bowls[i] - '0');
        }
    }
    return score;
}