int bowlingScore(const string& input) {
    int totalScore = 0;
    int frame = 0;
    int throws[21];
    
    for (char c : input) {
        if (c == 'X') {
            throws[frame] = 10;
            throws[frame + 1] = 0;
            frame += 2;
        } else if (c == '/') {
            throws[frame - 1] = 10 - throws[frame - 2];
            throws[frame] = 0;
            frame += 1;
        } else if (c == '-') {
            throws[frame] = 0;
            frame += 1;
        } else {
            throws[frame] = c - '0';
            frame += 1;
        }
    }
    
    for (int i = 0; i < 10; ++i) {
        if (throws[i * 2] == 10) {
            totalScore += 10 + throws[i * 2 + 2] + throws[i * 2 + 4];
            if (throws[i * 2 + 2] == 10)
                totalScore += throws[i * 2 + 4];
        } else if (throws[i * 2] + throws[i * 2 + 1] == 10) {
            totalScore += 10 + throws[i * 2 + 2];
        } else {
            totalScore += throws[i * 2] + throws[i * 2 + 1];
        }
    }
    
    return totalScore;
}

int main() {
    string input;
    cin >> input;
    cout << bowlingScore(input) << endl;
    return 0;
}