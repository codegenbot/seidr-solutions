int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            string prev = s.substr(0, i);
            string next = s.substr(i + 1);
            if (prev[0] == 'X') {
                score += 30;
            } else if (prev.length() >= 2) {
                int sum = 0;
                for (char c : prev) {
                    if (c != '/') {
                        sum += c - '0';
                    }
                }
                score += sum + 10;
            } else {
                score += prev[0] - '0' + 10;
            }
            string spare = "10";
            if (next.length() >= 2) {
                for (int j = 0; j < next.length(); j++) {
                    if (next[j] != '/') {
                        spare = "";
                        break;
                    } else if (j == next.length() - 1) {
                        spare = "10";
                    }
                }
            }
            if (spare == "10") {
                score += 20 + next[0] - '0';
            } else {
                int sum = 0;
                for (char c : next) {
                    if (c != '/') {
                        sum += c - '0';
                    }
                }
                score += 10 + sum;
            }
        } else {
            string frame = "";
            while (i < s.length() && s[i] != '/') {
                frame.push_back(s[i]);
                i++;
            }
            if (frame[0] == 'X') {
                score += 30;
            } else if (frame.length() >= 2) {
                int sum = 0;
                for (char c : frame) {
                    sum += c - '0';
                }
                score += sum + 10;
            } else {
                score += frame[0] - '0' + 10;
            }
        }
    }
    return score;
}