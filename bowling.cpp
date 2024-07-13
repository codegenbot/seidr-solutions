int scoreBowlingRound(string score) {
    int total_score = 0;
    int frame = 0;
    for (int i = 0; i < score.size(); i++) {
        if (score[i] == 'X') {
            total_score += 10 + (score[i+1] == 'X' ? 10 : (isdigit(score[i+1]) ? score[i+1]-'0' : 10));
            if (frame < 9) frame++;
        } else if (score[i] == '/') {
            total_score += 10 - (isdigit(score[i-1]) ? score[i-1]-'0' : 0) + (isdigit(score[i+1]) ? score[i+1]-'0' : 10);
            if (frame < 9) frame++;
        } else {
            total_score += isdigit(score[i]) ? score[i]-'0' : 0;
            if (isdigit(score[i]) && i+1 < score.size() && isdigit(score[i+1])) {
                total_score += score[i+1]-'0';
            }
            if (frame < 9) frame++;
            i++;
        }
    }
    return total_score;
}

int main() {
    string score;
    cin >> score;
    cout << scoreBowlingRound(score) << endl;
    return 0;
}