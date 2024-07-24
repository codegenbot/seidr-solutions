int calculateBowlingScore(string s) {
    int score = 0;
    int frame = 0;
    int frameScore[10];
    memset(frameScore, 0, sizeof(frameScore));
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') {
            frameScore[frame] = 10;
            frame++;
        } else if (s[i] == '/') {
            frameScore[frame] = 10 - (s[i - 1] - '0');
            frame++;
        } else if (s[i] == '-') {
            frame++;
        } else {
            frameScore[frame] += (s[i] - '0');
            if (s[i+1] == '/') {
                frameScore[frame] = 10;
                frame++;
            } else if (frameScore[frame] == 10) {
                frame++;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        score += frameScore[i];
    }
    
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << calculateBowlingScore(s) << endl;
    return 0;
}