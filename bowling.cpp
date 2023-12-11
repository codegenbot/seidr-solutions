#include <iostream>
#include <string>
using namespace std;

int scoreOfRound(string round) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    int bowls[21] = {0};

    for (char c : round) {
        if (c == 'X') {
            bowls[bowl++] = 10;
            if (frame < 10) {
                bowl++;
            }
        } else if (c == '/') {
            bowls[bowl++] = 10 - bowls[bowl - 1];
        } else if (c == '-') {
            // do nothing
        } else {
            bowls[bowl++] = c - '0';
        }
    }

    for (int i = 0; i < 10; i++) {
        if (bowls[i * 2] == 10) {
            score += 10 + bowls[i * 2 + 2] + bowls[i * 2 + 3];
        } else if (bowls[i * 2] + bowls[i * 2 + 1] == 10) {
            score += 10 + bowls[i * 2 + 2];
        } else {
            score += bowls[i * 2] + bowls[i * 2 + 1];
        }
    }

    return score;
}

int main() {
    string round;
    cin >> round;
    cout << scoreOfRound(round) << endl;
    return 0;
}