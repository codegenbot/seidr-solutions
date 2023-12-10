```
#include <iostream>
#include <string>
using namespace std;

int calculateScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.length(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
        } else if (bowls[i] >= '0' && bowls[i] <= '9') {
            score += bowls[i] - '0';
        }
    }
    return score;
}

int main() {
    string input;
    getline(cin, input);
    cout << calculateScore(input) << endl;
    return 0;
}
```