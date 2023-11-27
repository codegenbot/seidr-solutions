#include <iostream>
#include <string>
using namespace std;

int calculateScore(string bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    while (frame <= 10 && bowlIndex < bowls.length()) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 1])) ? bowls[bowlIndex + 1] - '0' : 0;
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 2])) ? bowls[bowlIndex + 2] - '0' : 0;
            bowlIndex++;
        } else if (bowls[bowlIndex] == '/') {
            score += 10;
            score += (isdigit(bowls[bowlIndex + 1])) ? 10 - (bowls[bowlIndex + 1] - '0') : 0;
            bowlIndex++;
        } else if (isdigit(bowls[bowlIndex])) {
            score += bowls[bowlIndex] - '0';
        }

        bowlIndex++;
        frame++;
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;

    int score = calculateScore(bowls);
    cout << score << endl;

    return 0;
}