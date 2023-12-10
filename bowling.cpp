#include <string>
#include <iostream>
#include <cstring>

using namespace std;

int get_score(string bowls) {
    int score = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (bowls[i] == 'X') {
            score += 10;
        } else if (bowls[i] == '/') {
            score += 5;
        } else {
            score += bowls[i] - '0';
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << get_score(bowls) << endl;
    return 0;
}