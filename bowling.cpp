```cpp
#include <string>
#include <sstream>

int bowlingScore(string s) {
    int score = 0;
    std::stringstream ss(s);
    string line;
    bool strike = false;
    while (std::getline(ss, line)) {
        if (line == "X") {
            score += 30;
            strike = true;
        } else if (line == "/") {
            if (!strike) {
                score += 10 + (score / 10 - 1);
            }
            strike = false;
        } else {
            int temp = line[0] - '0';
            if (strike) {
                score += temp * 2;
                strike = false;
            } else {
                score += temp;
            }
        }
    }
    return score;
}

int main() {
    string input;
    cout << "Enter bowling scores: ";
    getline(cin, input);
    int result = bowlingScore(input);
    cout << "Total score: " << result << endl;
    return 0;
}