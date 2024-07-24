int main() {
    string bowls;
    cin >> bowls;
    
    int score = 0;
    int frame = 0;
    int ball = 0;
    
    for (char c : bowls) {
        if (c == 'X') {
            score += 10;
            if (frame < 9) {
                score += (bowls[ball + 1] == 'X' ? 10 : (bowls[ball + 1] == '/' ? 10 - (bowls[ball] - '0') : bowls[ball + 1] - '0'));
                score += (bowls[ball + 2] == 'X' ? 10 : (bowls[ball + 2] == '/' ? 10 - (bowls[ball + 1] - '0') : bowls[ball + 2] - '0'));
            }
            ball++;
            frame++;
        } else if (c == '/') {
            score += 10 - (bowls[ball - 1] - '0');
            score += (bowls[ball + 1] == 'X' ? 10 : bowls[ball + 1] - '0');
            ball += 2;
            frame++;
        } else {
            score += c - '0';
            ball++;
            if (c == '-') {
                frame++;
            }
        }
        
        if (frame == 10) {
            break;
        }
    }
    
    cout << score << endl;
    
    return 0;
}