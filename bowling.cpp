#include <string>
#include <map>
#include <iostream>

using namespace std;

int calculateScore(const string& bowlingString) {
    int score = 0;
    map<char, int> scores = {{'X', 10}, {'/', -1}, {'-', -2}};
    for (auto c : bowlingString) {
        if (scores.count(c)) {
            score += scores[c];
        } else {
            score++;
        }
    }
    return score;
}

int main() {
    string input = "532/4362X179-41447/5";
    cout << calculateScore(input) << endl;
    return 0;
}