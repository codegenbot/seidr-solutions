int bowling(string s) {
    int score = 0;
    vector<int> frames;

    for (char c : s) {
        if (c == 'X') {
            frames.push_back(10);
        } else if (c == '/') {
            continue;
        } else {
            int frame = 0;
            frame += (c - '0') * 10 + (s[1] - '0');
            s = s.substr(2);
            frames.push_back(frame);
        }
    }

    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] == 10) {
            score += frames[i];
        } else {
            int next = i + 1;
            while (next < frames.size() && frames[next] < 10) {
                next++;
            }
            score += frames[i] + ((next - i > 0) ? frames[i + 1] : 0);
            i = next - 1;
        }
    }

    return score;
}