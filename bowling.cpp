int bowlingScore(string s) {
    int score = 0;
    int frame = 1;
    int ball = 0;
    map<char, int> values = {{'X', 10}, {'/', 10}, {'-', 0}};
    
    for (char c : s) {
        if (c == 'X' || c == '/') {
            score += 10;
            if (frame < 10) {
                score += values[s[ball+1]];
                if (c == 'X') {
                    score += values[s[ball+2]];
                }
            }
            ball += 1;
        } else if (c == '-') {
            // do nothing
        } else {
            score += c - '0';
            if (frame < 10 && ball % 2 == 1) {
                if (s[ball-1] == '/') {
                    score += c - '0';
                }
            }
            ball += 1;
        }
        
        if (ball % 2 == 0) {
            frame += 1;
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