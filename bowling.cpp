int calculateBowlingScore(string bowls) {
    int score = 0;
    int frame = 0;
    
    for (int i = 0; i < bowls.size(); i++) {
        if (frame == 10) break; // 10 frames are done
        
        if (bowls[i] == 'X') {
            score += 10;
            if (bowls[i+2] == 'X') {
                score += 10;
                if (bowls[i+4] == 'X') {
                    score += 10;
                } else if (bowls[i+4] == '-') {
                    score += 0;
                } else {
                    score += bowls[i+4] - '0';
                }
            } else if (bowls[i+2] == '-') {
                score += 0;
            } else {
                score += bowls[i+2] - '0';
                if (bowls[i+3] == '/') {
                    score += 10 - (bowls[i+2] - '0');
                } else if (bowls[i+3] == '-') {
                    score += 0;
                } else {
                    score += bowls[i+3] - '0';
                }
            }
            frame++;
        } else if (bowls[i] == '/') {
            score += 10 - (bowls[i-1] - '0');
            if (bowls[i+1] == 'X') {
                score += 10;
            } else if (bowls[i+1] == '-') {
                score += 0;
            } else {
                score += bowls[i+1] - '0';
            }
            frame++;
        } else if (bowls[i] == '-') {
            score += 0;
        } else {
            score += bowls[i] - '0';
            frame++;
        }
    }
    
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateBowlingScore(bowls) << endl;
    
    return 0;
}