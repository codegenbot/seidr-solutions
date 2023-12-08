```
#include <string>
#include <iostream>
#include <cmath>
using namespace std;
int calculateScore(string bowling) {
    int score = 0;
    for (int i = 0; i < bowling.size(); i++) {
        if (bowling[i] == 'X') {
            score += 10;
        } else if (bowling[i] == '/') {
            score += 5;
        } else {
            score += atoi(const_cast<const char*>(&bowling[i]));
        }
    }
    return score;
}
int main() {
    string bowling;
    cin >> bowling;
    cout << calculateScore(bowling) << endl;
    return 0;
}
```