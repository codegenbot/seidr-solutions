#include <iostream>
#include <string>
using namespace std;

int getScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            // If the current frame is a strike, add the bonus points
            score += 10 + (i < bowls.size() - 1 ? bowls[i+1] : 0);
        } else if (bowls[i] >= '0' && bowls[i] <= '9') {
            // If the current frame is a spare, add the bonus points
            score += bowls[i] - '0' + (i < bowls.size() - 1 ? bowls[i+1] : 0);
        } else {
            // Otherwise, just count the regular points for this frame
            score += bowls[i];
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << getScore(bowls) << endl;
    return 0;
}