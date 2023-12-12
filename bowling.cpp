#include <iostream>
#include <string>

using namespace std;

int calculateScore(string bowlingString) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (bowlingString[i] == 'X') {
            score += 10;
        } else if (bowlingString[i] == '/') {
            score += 10 - (i % 2 == 0 ? 5 : 3);
        } else {
            score += bowlingString[i] - '0';
        }
    }
    return score;
}

int main() {
    string bowlingString;
    cin >> bowlingString;
    cout << calculateScore(bowlingString) << endl;
    return 0;
}