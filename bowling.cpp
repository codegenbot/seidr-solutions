#include <iostream>
#include <string>

using namespace std;

int getScore(string bowls) {
    int score = 0;
    int frame = 1;
    int ball = 0;

    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[i + 1] == 'X') ? 10 : stoi(string(1, bowls[i + 1]));
                score += (bowls[i + 2] == 'X') ? 10 : stoi(string(1, bowls[i + 2]));
            }
            ball++;
        } else if (bowls[i] == '/') {
            score += 10 - stoi(string(1, bowls[i - 1]));
            if (frame < 10) {
                score += (bowls[i + 1] == 'X') ? 10 : stoi(string(1, bowls[i + 1]));
            }
            ball = 0;
        } else if (bowls[i] == '-') {
            ball++;
        } else {
            score += stoi(string(1, bowls[i]));
            ball++;
        }

        if (frame < 10 && (ball == 2 || bowls[i] == 'X')) {
            frame++;
            ball = 0;
        }
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;

    int score = getScore(bowls);
    cout << score << endl;

    return 0;
}