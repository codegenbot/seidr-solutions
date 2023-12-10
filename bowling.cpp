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
        } else if (bowls[i] >= '0' && bowls[i] <= '9') {
            score += bowls[i] - '0';
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