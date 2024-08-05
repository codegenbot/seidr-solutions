#include <string>

int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            string firstHalf = s.substr(0, i);
            string secondHalf = s.substr(i + 1);
            int firstPin = stoi(split(firstHalf, '/')[0]);
            int secondPin = stoi(split(secondHalf, '/')[1]);
            if (firstPin + secondPin == 10) {
                score += 10;
                currentFrame++;
            } else {
                score += firstPin + secondPin;
                currentFrame++;
            }
        } else if (s[i] == 'X') {
            score += 10;
            currentFrame++;
        } else if (s[i] == ' ') {
            i++; // skip the space
        } else {
            string str = s.substr(i);
            int pins = stoi(str);
            if (pins < 10) {
                score += pins;
                currentFrame++;
            } else {
                score += 10 + stoi(str.substr(1));
                currentFrame++;
            }
        }
    }
    return score;
}

string split(string str, char c) {
    int pos = 0;
    string token = "";
    while ((pos = str.find(c)) != string::npos) {
        token = str.substr(0, pos);
        str.erase(0, pos + 1);
    }
    token += str;
    return token;
}