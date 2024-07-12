#include <iostream>
using namespace std;

int score(string bowls) {
    int totalScore = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (frame == 10) break;
        if (bowls[i] == 'X') {
            totalScore += 10;
            totalScore += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] == '/') ? 10 - (bowls[i + 1] - '0') : bowls[i + 1] - '0' + bowls[i + 2] - '0';
            frame++;
        } else if (bowls[i] == '/') {
            totalScore += 10 - (bowls[i - 1] - '0');
            totalScore += (bowls[i + 1] == 'X') ? 10 : bowls[i + 1] - '0';
            frame++;
        } else {
            totalScore += bowls[i] - '0';
            if (bowls[i] == '-') frame++;
        }
    }
    return totalScore;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << score(bowls) << endl;
    return 0;
}