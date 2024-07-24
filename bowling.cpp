#include <vector>
using namespace std;

int bowlingScore(string bowls) {
    int score = 0;
    bool firstRollInFrame = true;
    vector<int> frameScores;

    for (char bowl : bowls) {
        if (bowl == '/') {
            if (firstRollInFrame) {
                frameScores.push_back(10);
                firstRollInFrame = false;
            } else {
                int roll1 = stoi(string() + rolls.back());
                rolls.pop_back();
                int roll2 = stoi(string() + bowl);
                if (roll2 == 0) {
                    frameScores.back() += 10;
                } else {
                    frameScores.back() += roll1 + roll2;
                }
            }
        } else {
            int roll = stoi(string() + bowl);
            rolls.push_back(roll);
            if (rolls.size() == 2) {
                int roll1 = stoi(string() + rolls.front());
                rolls.pop_front();
                int roll2 = stoi(string() + bowl);
                if (roll2 == 0) {
                    frameScores.push_back(10 + roll1);
                } else {
                    frameScores.push_back(roll1 + roll2);
                }
            }
        }
    }

    for (int i = 0; i < frameScores.size(); i++) {
        score += frameScores[i];
    }

    return score;
}

int main() {
    string bowls;
    cout << "Enter the bowling strings separated by spaces: ";
    cin >> bowls;
    int score = bowlingScore(bows);
    cout << "The bowling score is: " << score << endl;
    return 0;
}