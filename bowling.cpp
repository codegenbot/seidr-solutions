int bowlingScore(string s) {
    int score = 0;
    bool newRoll = true;
    for (char c : s) {
        if (c == '/') {
            score += getBones(cats);
            cats = 0;
            newRoll = true;
        } else if (c >= '0' && c <= '9') {
            cats = cats * 10 + (c - '0');
            newRoll = false;
        }
    }
    return score;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin.ignore();
    for(int i=0; i<n; ++i) {
        getline(cin, s);
        cout << bowlingScore(s) << endl;
    }
    return 0;
}