#include <vector>
using namespace std;

int bowlingScore(const string& input) {
    int score = 0;
    for (int frame = 1; frame <= 10; ++frame) {
        char firstRoll = input[2 * frame - 1];
        char secondRoll = input[2 * frame] ? input[2 * frame] : 'X';
        
        if (secondRoll == 'X') {
            score += 10;
        } else if (firstRoll != '/' && secondRoll != 'X') {
            int roll1, roll2;
            sscanf(&input[2 * frame - 2], "%d", &roll1);
            sscanf(&input[2 * frame], "%d", &roll2);
            score += roll1 + roll2;
        } else if (firstRoll == '/') {
            int roll1 = input[2 * frame - 2] - '0';
            score += roll1 + (secondRoll - '0');
        }
    }
    
    return score;
}

int main() {
    string input;
    cin >> input;
    cout << bowlingScore(input) << endl;
    return 0;
}