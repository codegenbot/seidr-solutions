
Sure, here is a possible solution:
```
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int getScore(string input) {
    int score = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == 'X') {
            score += 10;
        } else if (input[i] == '/') {
            score += 5;
        } else if (input[i] == '-') {
            score += 2;
        } else if (input[i] == '0' && i > 0 && input[i-1] != 'X') { // handle case of X/ strike
            score += 9;
        } else {
            score += input[i] - '0';
        }
    }
    return score;
}

int main() {
    string input;
    getline(cin, input);
    cout << getScore(input) << endl;
    return 0;
}
```