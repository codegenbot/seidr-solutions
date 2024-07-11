int getScore(string s) {
    int score = 0;
    int frame = 1;
    int bowl = 0;
    vector<int> scores;

    for (char& c : s) {
        if (c == 'X') {
            scores.push_back(10);
            if (frame < 10) frame++;
        } else if (c == '/') {
            scores.push_back(10 - scores.back());
            if (frame < 10) frame++;
        } else if (c == '-') {
            scores.push_back(0);
        } else {
            scores.push_back(c - '0');
        }

        if (bowl >= 1 || c == 'X' || frame == 10) {
            int i = scores.size() - 1;
            while (bowl < 2 && i >= 1) {
                if (scores[i-1] == 10 || scores[i-1] + scores[i] == 10) {
                    score += scores[i-1] + scores[i];
                    i -= 2;
                } else {
                    score += scores[i];
                    i--;
                }
                bowl++;
            }
        }

        bowl %= 2;
    }

    return score;
}

int main() {
    string s;
    cin >> s;
    cout << getScore(s) << endl;
    return 0;
}