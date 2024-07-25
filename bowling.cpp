int score(string input) {
    int totalScore = 0;
    int frame = 1;
    int roll = 0;
    vector<int> scores(22, 0);
    
    for(char c : input) {
        if(c == 'X') {
            scores[roll] = 10;
            roll++;
            frame++;
        } else if(c == '/') {
            scores[roll] = 10 - scores[roll - 1];
            roll++;
        } else if(c == '-') {
            scores[roll] = 0;
            roll++;
        } else {
            scores[roll] = c - '0';
            roll++;
            if(frame % 2 == 0 || c == '9') {
                frame++;
            }
        }
    }
    
    for(int i = 0; i < 10; i++) {
        if(scores[i * 2] == 10) {
            totalScore += 10 + scores[i * 2 + 2] + scores[i * 2 + 4];
        } else if(scores[i * 2] + scores[i * 2 + 1] == 10) {
            totalScore += 10 + scores[i * 2 + 2];
        } else {
            totalScore += scores[i * 2] + scores[i * 2 + 1];
        }
    }
    
    return totalScore;
}

int main() {
    string input;
    getline(cin, input);
    cout << score(input) << endl;
    return 0;
}