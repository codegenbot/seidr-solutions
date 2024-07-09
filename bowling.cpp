```
#include <iostream>
using namespace std;

int scoreGame(string game) {
    int score = 0;
    int roll = 0;
    for (char c : game) {
        if (c == '/') {
            if (roll < 10) {
                score += 10 - roll;
                roll = 0;
            } else {
                roll = 0;
            }
        } else if (isdigit(c)) {
            int currentRoll = stoi(string(1, c));
            if (currentRoll + roll > 10) {
                score += 10 - (roll = 0);
                roll = 0;
            } else {
                roll += currentRoll;
            }
        }
    }
    return score;
}

int main() {
    string game;
    cout << "Enter the game: ";
    cin >> game;
    int result = scoreGame(game);
    cout << "The score is: " << result << endl;
    return 0;
}