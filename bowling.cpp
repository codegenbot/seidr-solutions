int score(string bowling) {
    int totalScore = 0;
    int frame = 0;
    for (int i = 0; i < bowling.size() && frame < 10; ++i) {
        if (bowling[i] == 'X') {
            totalScore += 10;
            totalScore += (bowling[i+1] == 'X') ? 10 : (bowling[i+1] == '/' ? 10 - (bowling[i+2] - '0') : (bowling[i+1] - '0') + (bowling[i+2] == '/' ? 10 - (bowling[i+3] - '0') : (bowling[i+2] - '0')));
            ++frame;
        } else if (bowling[i] == '/') {
            totalScore += 10 - (bowling[i-1] - '0');
            totalScore += (bowling[i+1] == 'X') ? 10 : (bowling[i+1] - '0');
            ++i;
            ++frame;
        } else {
            totalScore += (bowling[i] - '0');
            if (bowling[i+1] == '/') {
                totalScore += 10 - (bowling[i+2] - '0');
                ++i;
            }
            ++frame;
        }
    }
    return totalScore;
}

int main() {
    string bowling;
    cin >> bowling;
    cout << score(bowling);
    return 0;
}