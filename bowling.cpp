#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int calculateScore(const string& bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
        } else if (isdigit(bowls[i])) {
            score += stoi(string(1, bowls[i]));
        }
    }
    return score;
}

int main() {
    string bowls;
    getline(cin, bowls);
    cout << calculateScore(bowls) << endl;
    return 0;
}