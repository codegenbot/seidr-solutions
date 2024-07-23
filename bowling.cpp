int bowlingScore(string s) {
    map<char, int> scores = {{'X', 10}, {'/', 10}, {'-', 0}};
    int totalScore = 0;
    int frame = 1;
    int throwNum = 0;

    for (int i = 0; i < s.size() && frame <= 10; i++) {
        char ch = s[i];
        if (ch == 'X') {
            totalScore += 10 + scores[s[i+1]] + scores[s[i+2]];
            frame++;
            throwNum = 0;
        } else if (ch == '/') {
            totalScore += 10 - scores[s[i-1]] + scores[s[i+1]];
            frame++;
            throwNum = 0;
        } else if (ch == '-') {
            throwNum++;
        } else {
            totalScore += scores[ch];
            throwNum++;

            if (throwNum == 2) {
                frame++;
                throwNum = 0;
            }
        }
    }
    return totalScore;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}