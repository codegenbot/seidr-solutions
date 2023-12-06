
#include <string>
#include <iostream>
using namespace std;

int getScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.length(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
            // Check if the next two bowls are strikes or spares
            if (i + 2 < bowls.length()) {
                if (bowls[i + 1] == '/' || bowls[i + 1] == 'X') {
                    score += 10;
                } else if (bowls[i + 2] == '/' || bowls[i + 2] == 'X') {
                    score += 10;
                }
            }
        } else if (bowls[i] == '/') {
            // Check if the previous bowl is a strike or spare
            if (i > 0 && (bowls[i - 1] == 'X' || bowls[i - 1] == '/')) {
                score += 10;
            } else {
                score += int(bowls[i]);
            }
        } else if (bowls[i] == '-') {
            // Check if the previous two bowls are strikes or spares
            if (i > 1 && (bowls[i - 2] == 'X' || bowls[i - 2] == '/')) {
                score += 10;
            } else {
                score += int(bowls[i]);
            }
        } else {
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