#include <string>
#include <iostream>
using namespace std;
int calculateScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            // If the current frame is a strike, add 10 points to the score and skip the next two frames
            score += 10;
            i += 2;
        } else if (bowls[i] == '/') {
            // If the current frame is a spare, add 5 points to the score and skip the next frame
            score += 5;
            i++;
        } else if (bowls[i] == '-') {
            score -= 5;
        } else {
            score += bowls[i] - '0';
        }
    }
    return score;
}
int main() {
    string bowls;
    cin >> bowls;
    cout << calculateScore(bowls) << endl;
    return 0;
}