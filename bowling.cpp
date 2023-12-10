#include <string>
using namespace std;
int getScore(string input) {
    int score = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '/') {
            score += 10 - (i % 10);
        } else if (isdigit(input[i])) {
            score += input[i] - '0';
        }
    }
    return score;
}