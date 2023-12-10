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

int calculateScore(const string& input) {
    int score = 0;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'X') {
            score += 10;
        } else if (input[i] == '/') {
            score += 5;
        } else if (input[i] == '-') {
            score -= 2;
        } else {
            score += input[i] - '0';
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