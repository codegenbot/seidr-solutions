
```
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
int getScore(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
        } else if (bowls[i] == '/') {
            score += 5;
        } else if (bowls[i] == '-') {
            score -= 5;
        } else if (bowls[i] == 'S' && bowls[i + 1] == 'P') { // new condition to check for strike followed by spare
            score += 10;
        }
    }
    return score;
}
int main() {
    string bowls = "XXXXXXXXXXXX";
    cout << getScore(bowls) << endl;
    return 0;
}
```