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

int calculateScore(const string& bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            // If the current bowl is a strike, add 10 to the score and check if there are any more strikes in a row
            score += 10;
            while (i + 1 < bowls.size() && bowls[i + 1] == 'X') {
                // If there is another strike in a row, add 10 to the score and increment i
                score += 10;
                i++;
            }
        } else if (bowls[i] == '/') {
            score += 5;
        } else if (bowls[i] == '-') {
            score -= 5;
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