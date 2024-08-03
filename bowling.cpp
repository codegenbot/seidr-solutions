using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] != '/') {
            if (isdigit(s[i])) {
                score += s[i] - '0';
            } else {
                score += 10;
            }
        } else {
            string first, second;
            int j = i + 1;
            while (j < 10 && !isdigit(s[j])) {
                ++j;
            }
            for (; i <= j; ++i) {
                first += s[i];
            }
            i = j;
            while (i < 10 && isdigit(s[i])) {
                second += s[i];
                ++i;
            }
            if (second.empty()) {
                score += stoi(first);
            } else {
                score += stoi(first) + stoi(second);
            }
        }
    }
    return score;
}