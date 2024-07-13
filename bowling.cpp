int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> points(22, 0);
    
    for (char c : s) {
        if (c == 'X') {
            points[ball] = 10;
            points[ball + 1] = 0;
            points[ball + 2] = 0;
            ball += 2;
        } else if (c == '/') {
            points[ball] = 10 - points[ball - 1];
            ball += 1;
        } else if (c == '-') {
            points[ball] = 0;
            ball += 1;
        } else {
            points[ball] = c - '0';
            ball += 1;
        }
    }
    
    for (int i = 0; i < 10; ++i) {
        if (points[frame] == 10) {
            score += 10 + points[frame + 1] + points[frame + 2];
            frame += 1;
        } else if (points[frame] + points[frame + 1] == 10) {
            score += 10 + points[frame + 2];
            frame += 2;
        } else {
            score += points[frame] + points[frame + 1];
            frame += 2;
        }
    }
    
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}