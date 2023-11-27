#include <iostream>
#include <string>
using namespace std;

int calculateBowlingScore(string bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    while (frame <= 10 && bowlIndex < bowls.length()) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[bowlIndex + 1] == 'X') ? 10 : stoi(string(1, bowls[bowlIndex + 1]));
                score += (bowls[bowlIndex + 2] == 'X') ? 10 : stoi(string(1, bowls[bowlIndex + 2]));
            } else {
                score += (bowls[bowlIndex + 1] == 'X') ? 10 : ((bowls[bowlIndex + 1] == '/') ? (10 - stoi(string(1, bowls[bowlIndex + 2]))) : stoi(string(1, bowls[bowlIndex + 1])));
                score += (bowls[bowlIndex + 2] == 'X') ? 10 : ((bowls[bowlIndex + 2] == '/') ? (10 - stoi(string(1, bowls[bowlIndex + 1]))) : stoi(string(1, bowls[bowlIndex + 2])));
            }
            bowlIndex++;
        } else if (bowls[bowlIndex] == '/') {
            score += (10 - stoi(string(1, bowls[bowlIndex - 1])));
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : stoi(string(1, bowls[bowlIndex + 1]));
            bowlIndex += 2;
        } else {
            score += stoi(string(1, bowls[bowlIndex]));
            bowlIndex++;
        }
        frame++;
    }

    return score;
}

int main() {
    string input;
    getline(cin, input);
    int result = calculateBowlingScore(input);
    cout << result << endl;
    return 0;
}