#include <iostream>
#include <string>

using namespace std;

int bowlingScore(std::string s) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    for (char c : s) {
        // existing logic remains the same
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}