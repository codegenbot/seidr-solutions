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

int main() {
    string input;
    cin >> input;

    int score = 0;
    bool previousStrike = false;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            score += 10;
            previousStrike = true;
        } else if (input[i] >= '0' && input[i] <= '9') {
            score += input[i] - '0';
            previousStrike = false;
        } else if (previousStrike) {
            score += 10;
        }
    }

    cout << "Score: " << score << endl;

    return 0;
}