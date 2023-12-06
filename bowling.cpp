
#include <string>
#include <iostream>
using namespace std;

int getScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.length(); i++) {
        if (bowls[i] == 'X') {
            // Strike, add ten points
            score += 10;
        } else if (bowls[i] == '/') {
            // Spare, add ten points plus the number of pins knocked down with the next roll
            score += 10 + int(bowls[i+1]);
        } else {
            // Not a strike or spare, add the number of pins knocked down
            score += int(bowls[i]);
        }
    }
    return score;
}

int main() {
    string bowls = "258/238172X32189-51";
    cout << getScore(bowls) << endl;
    return 0;
}