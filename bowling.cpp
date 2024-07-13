int bowling(string s) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < s.size() && frame < 10; i++) {
        if (s[i] == 'X') {
            score += 10;
            if (s[i+2] == 'X') {
                score += 10;
                if (s[i+4] == 'X') {
                    score += 10;
                } else {
                    score += (s[i+4] - '0');
                }
            } else {
                if (s[i+3] == '/') {
                    score += 10;
                } else {
                    score += (s[i+2] - '0') + (s[i+3] - '0');
                }
            }
            frame++;
        } else if (s[i] == '/') {
            score += (10 - (s[i-1] - '0'));
            if (s[i+2] == 'X') {
                score += 10;
            } else {
                score += (s[i+2] - '0');
            }
            frame++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            score += (s[i] - '0');
            if (s[i+1] == '/') {
                score += (10 - (s[i] - '0'));
            }
            frame++;
        }
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowling(s) << endl;
    return 0;
}