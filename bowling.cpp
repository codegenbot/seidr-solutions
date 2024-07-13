#include <vector>
using namespace std;

int bowlingScore(string s) {
    int score = 0;
    vector<int> rolls(10);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            int first = stoi(s.substr(i - 1, 1));
            int second = stoi(s.substr(i + 1, 1));
            if (first != 0 || second != 0) {
                rolls[i % 10] = first + second;
            } else {
                rolls[i % 10] = 10;
            }
        } else {
            rolls[i % 10] = stoi(s.substr(i, 1));
        }
    }

    for (int i = 0; i < 10; i++) {
        if (rolls[i] == 10) {
            score += 10 + bowlingScoreForNextTwo(rolls, i);
        } else if (i < 8 && rolls[i] + rolls[i+1] > 10) {
            score += 10;
        } else {
            score += rolls[i];
        }
    }

    return score;
}

int bowlingScoreForNextTwo(vector<int> rolls, int start) {
    int score = 0;
    for (int i = 0; i < 2 && start + i < 10; i++) {
        if (rolls[start+i] == 10) {
            score += 10 + bowlingScoreForLastRoll(rolls, start+i+1);
        } else if (start + i < 8 && rolls[start+i] + rolls[start+i+1] > 10) {
            score += 10;
        } else {
            score += rolls[start+i];
        }
    }
    return score;
}

int bowlingScoreForLastRoll(vector<int> rolls, int start) {
    for (int i = 0; i < 3 && start + i < 10; i++) {
        if (rolls[start+i] == 10) {
            return 10;
        } else {
            return rolls[start+i];
        }
    }
    return 0;
}