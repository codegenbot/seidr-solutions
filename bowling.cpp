int bowling(string bowls) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size(); i++) {
        if (frame == 10) {
            break;
        }
        if (bowls[i] == 'X') {
            score += 10;
            if (bowls[i + 2] == 'X') {
                score += 10;
                if (bowls[i + 4] == 'X') {
                    score += 10;
                } else {
                    score += (bowls[i + 4] == '/') ? 10 : (int)(bowls[i + 4] - '0');
                }
            } else {
                score += (bowls[i + 2] == '/') ? 10 : ((bowls[i + 2] == '-') ? 0 : (int)(bowls[i + 2] - '0'));
                score += (bowls[i + 3] == '/') ? 10 : ((bowls[i + 3] == '-') ? 0 : (int)(bowls[i + 3] - '0'));
            }
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (int)(bowls[i - 1] - '0');
            score += (bowls[i + 1] == 'X') ? 10 : ((bowls[i + 1] == '-') ? 0 : (int)(bowls[i + 1] - '0'));
            frame++;
        } else if (bowls[i] != '-') {
            score += (int)(bowls[i] - '0');
        }
        if (bowls[i] != '/') {
            if (bowls[i] != 'X' && bowls[i + 1] != '/' && bowls[i + 1] != 'X') {
                frame++;
            }
        }
    }
    return score;
}
int main() {
    string bowls;
    cin >> bowls;
    cout << bowling(bowls);
    return 0;
}