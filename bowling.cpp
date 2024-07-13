int bowling_score(string s) {
    int score = 0;
    int frame = 0;
    int frames[10] = {0};

    for (int i = 0; i < s.size() && frame < 10; ++i) {
        if (s[i] == 'X') {
            frames[frame] = 10;
            if (frame > 0 && s[i-2] == 'X') {
                frames[frame-1] += 10;
            }
            if (frame > 1 && s[i-2] == 'X' && s[i-4] == 'X') {
                frames[frame-2] += 10;
            }
            frame++;
        } else if (s[i] == '/') {
            frames[frame] = 10 - frames[frame-1];
            frame++;
        } else if (s[i] == '-') {
            frames[frame] = 0;
            frame++;
        } else {
            frames[frame] += s[i] - '0';
            if (frame > 0 && s[i-1] == '/') {
                frames[frame-1] += s[i] - '0';
            }
        }
    }

    for (int i = 0; i < 10; ++i) {
        score += frames[i];
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << bowling_score(s) << endl;
    return 0;
}