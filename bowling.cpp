int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    vector<int> frames(10, 0);
    for (int i = 0; i < s.size() && frame < 10; ++i) {
        if (s[i] == 'X') {
            frames[frame] = 10;
            if (frame > 0) {
                if (s[i - 1] == 'X') {
                    frames[frame - 1] += 10;
                } else {
                    frames[frame - 1] += 10 + (i + 1 < s.size() ? (s[i + 1] == 'X' ? 10 : s[i + 1] - '0') : 0);
                }
            }
            if (frame > 1 && s[i - 1] == 'X' && s[i - 2] == 'X') {
                frames[frame - 2] += 10;
            }
            ++frame;
        } else if (s[i] == '/') {
            frames[frame] = 10 - (s[i - 1] - '0');
            if (frame > 0) {
                frames[frame - 1] += (i + 1 < s.size() && s[i + 1] != 'X' ? s[i + 1] - '0' : 10 - (s[i - 1] - '0'));
            }
            ++i;
            ++frame;
        } else {
            frames[frame] += s[i] - '0';
            if (frame > 0 && s[i - 1] == '/') {
                frames[frame - 1] += s[i] - '0';
            }
            ++i;
            if (i < s.size() && frame < 10 && s[i] != '/') {
                frames[frame] += s[i] - '0';
                ++i;
            }
            ++frame;
        }
    }
    for (int f : frames) {
        score += f;
    }
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowlingScore(s) << endl;
    return 0;
}