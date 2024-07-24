int scoreBowl(string bowls) {
    int score = 0, frame = 1, ball = 0;
    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[ball+1] == 'X') ? 10 + ((bowls[ball+2] == 'X') ? 10 : bowls[ball+2] - '0') : 
                    (bowls[ball+2] == '/') ? 10 : (bowls[ball+1] - '0') + (bowls[ball+2] - '0');
            }
            if (frame == 10) ball++;
            frame++;
        } else if (c == '/') {
            score += 10 - (bowls[ball-1] - '0');
            score += (frame == 10) ? 0 : (bowls[ball+1] == 'X') ? 10 : bowls[ball+1] - '0';
            if (frame == 10) ball++;
            frame++;
        } else if (c == '-') {
            score += 0;
        } else {
            score += c - '0';
            if (frame < 10 && ball % 2 == 1 && bowls[ball-1] == '/') {
                score += c - '0';
            }
            if (frame == 10) ball++;
        }
        ball++;
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << scoreBowl(bowls) << endl;
    return 0;
}