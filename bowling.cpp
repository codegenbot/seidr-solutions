int main() {
    string bowls;
    cin >> bowls;
    
    int score = 0;
    int frame = 1;
    for (int i = 0; i < bowls.size(); ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            if (frame < 10) {
                if (bowls[i + 2] == '/') {
                    score += 10;
                } else {
                    if (bowls[i + 1] == 'X') {
                        score += 10;
                    } else {
                        score += bowls[i + 1] - '0';
                    }
                    if (bowls[i + 2] == 'X') {
                        score += 10;
                    } else {
                        score += bowls[i + 2] - '0';
                    }
                }
                frame++;
            }
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i - 1] - '0');
            if (frame < 10) {
                score += bowls[i + 1] - '0';
                frame++;
            }
        } else if (bowls[i] == '-') {
            // do nothing
        } else {
            score += bowls[i] - '0';
            if (frame < 10) {
                if (bowls[i + 1] == '/') {
                    score += 10 - (bowls[i] - '0');
                }
                frame++;
            }
        }
    }
    
    cout << score << endl;
    
    return 0;
}