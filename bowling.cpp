#include <string>

int bowlingScore(string s) {
    int score = 0;
    string rollStr;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            score += calculateRoll(rollStr);
            rollStr.clear();
        } else {
            rollStr.push_back(s[i]);
        }
    }
    score += calculateRoll(rollStr);
    return score;
}

int calculateRoll(string s) {
    int total = 0;
    if (s.size() == 3) {
        if (stoi(s.substr(1,2)) == 10) {
            return stoi(s.substr(0,1));
        } else {
            return stoi(s);
        }
    } else {
        return stoi(s);
    }
}