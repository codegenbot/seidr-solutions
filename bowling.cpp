#include <string>
#include <sstream>

int bowlingScore(string s) {
    int score = 0;
    const char* str = s.c_str();
    bool strike = false;
    while (*str != '\0') {
        if (std::string(1, *str) == "X") {
            score += 30;
            strike = true;
        } else if (std::string(1, *str) == "/") {
            if (!strike) {
                score += 10 + (score / 10 - 1);
            }
            strike = false;
        } else {
            int temp = (*str - '0');
            if (strike) {
                score += temp * 2;
                strike = false;
            } else {
                score += temp;
            }
        }
        str++;
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