int bowlingScore(string s) {
    int score = 0;
    vector<int> frames;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') {
            score += 10;
            frames.push_back(10);
        } else if (isdigit(s[i])) {
            int frame = 0;
            string temp = "";
            while (i < s.length() && (isdigit(s[i]) || s[i] == '/')) {
                if (s[i] == '/') {
                    i++;
                    break;
                }
                temp += s[i];
                i++;
            }
            if (!temp.empty()) {
                frame = stoi(temp);
                if (frame > 10) {
                    int spare = 10 - stoi(temp.substr(0, temp.length() - 1));
                    score += 10 + spare;
                    frames.push_back(frame);
                } else {
                    score += frame;
                    frames.push_back(frame);
                }
            }
        }
    }

    for (int i = 0; i < frames.size(); i++) {
        if (frames[i] == 10) {
            continue;
        }
        int bonus = 10 - frames[i];
        if (i < frames.size() - 1 && frames[i + 1] > 0) {
            score += frames[i + 1];
            i++;
        } else if (bonus > 0) {
            score += bonus;
        }
    }

    return score;
}