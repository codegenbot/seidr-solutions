int bowlingScore(string bowls) {
    int score = 0, frame = 0, bowl = 0;
    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[bowl+1] == 'X') ? 10 : (isdigit(bowls[bowl+1]) ? bowls[bowl+1] - '0' : 10);
                score += (isdigit(bowls[bowl+2]) ? bowls[bowl+2] - '0' : (bowls[bowl+2] == '/' ? 10 : 10));
            }
            frame++;
        } else if (isdigit(c)) {
            score += c - '0';
            if (frame < 10 && bowls[bowl+1] == '/') {
                score += 10 - (c - '0');
            }
        } else if (c == '/') {
            score += 10 - (bowls[bowl-1] - '0');
            if (frame < 10) {
                score += (isdigit(bowls[bowl+1]) ? bowls[bowl+1] - '0' : 10);
            }
            frame++;
        }
        bowl++;
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << bowlingScore(bowls) << endl;
    return 0;
}