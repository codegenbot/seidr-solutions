int getScore(string bowls) {
    int score = 0;
    int frame = 1;
    for (int i = 0; i < bowls.size() && frame <= 10; ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 10) {
                score += (bowls[i + 1] == 'X' ? 10 : (bowls[i + 1] == '/' ? 10 - (bowls[i + 2] - '0') : bowls[i + 1] - '0') + (bowls[i + 2] == 'X' ? 10 : bowls[i + 2] == '/' ? 10 - (bowls[i + 3] - '0') : bowls[i + 2] - '0'));
                i--;
            }
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            score += bowls[i + 1] == 'X' ? 10 : bowls[i + 1] - '0';        
            frame++;
        } else {
            score += bowls[i] - '0';
            if (frame < 10 && i + 1 < bowls.size() && bowls[i + 1] == '/') {
                score += 10 - (bowls[i + 2] - '0');
                i++;
            }
            frame++;
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << getScore(bowls) << endl;
    return 0;
}