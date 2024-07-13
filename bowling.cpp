int main() {
    string bowls;
    cin >> bowls;
    
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size() && frame < 10; i++) {
        if (bowls[i] == 'X') {
            score += 10;
            if (bowls[i + 2] == 'X') {
                score += 10;
            } else {
                score += (bowls[i + 1] == 'X' ? 10 : (int)(bowls[i + 1] - '0'));
                score += (bowls[i + 2] == '/' ? 10 - (int)(bowls[i + 1] - '0') : (int)(bowls[i + 2] - '0'));
            }
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (int)(bowls[i - 1] - '0');
            score += (bowls[i + 1] == 'X' ? 10 : (int)(bowls[i + 1] - '0'));
            frame++;
        } else {
            score += (int)(bowls[i] - '0');
            if (bowls[i] == '-') {
                continue;
            }
            if (i + 1 < bowls.size() && bowls[i + 1] == '/') {
                score += 10 - (int)(bowls[i] - '0');
            }
        }
    }
    
    cout << score << endl;
    
    return 0;
}