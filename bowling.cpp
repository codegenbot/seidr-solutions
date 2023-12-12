```
#include <string>
#include <iostream>
using namespace std;
int calculateScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.length(); i++) {
        if (bowls[i] == 'X') {
            // Check if the next two bowls are also strikes
            if (i + 1 < bowls.length() && bowls[i + 1] == 'X' && i + 2 < bowls.length() && bowls[i + 2] == 'X') {
                // If so, add the score for a triple strike to the total score
                score += 30;
            } else {
                // Otherwise, just add the score for a single strike
                score += 10;
            }
        } else if (bowls[i] >= '0' && bowls[i] <= '9') {
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
```