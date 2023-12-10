

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
        char c = bowls[i];
        if (c == 'X') {
            score += 10;
        } else if (c == '/') {
            score += 5;
        } else if (c == '-') {
            score -= 5;
        } else if (isdigit(c)) {
            score += c - '0';
        }
    }
    return score;
}
int main() {
    string bowls = "XXXXXXXXXXXX";
    cout << getScore(bowls) << endl;
    return 0;
}