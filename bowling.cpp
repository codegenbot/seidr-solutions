int score(string s) {
    int totalScore = 0;
    int frame = 1;
    int roll = 0;
    vector<int> scores(21, 0);
    
    for (char c : s) {
        if (c == 'X') {
            scores[roll] = 10;
            roll++;
            frame++;
        } else if (c == '/') {
            scores[roll] = 10 - scores[roll - 1];
            roll++;
            frame++;
        } else if (c == '-') {
            scores[roll] = 0;
            roll++;
        } else {
            scores[roll] = c - '0';
            roll++;
        }
    }
    
    for (int i = 0; frame <= 10; i++) {
        if (scores[i] == 10) {
            totalScore += 10 + scores[i + 1] + scores[i + 2];
            frame++;
        } else if (scores[i] + scores[i + 1] == 10) {
            totalScore += 10 + scores[i + 2];
            i += 2;
            frame++;
        } else {
            totalScore += scores[i] + scores[i + 1];
            i += 2;
            frame++;
        }
    }
    
    return totalScore;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}