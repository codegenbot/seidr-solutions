int score(string input) {
    int totalScore = 0;
    int frame = 1;
    int bowls = 0;
    bool spare = false;
    
    for (char c : input) {
        if (frame > 10) break;
        
        if (c == 'X') {
            totalScore += 10;
            if (frame < 10) {
                totalScore += 10;
                bowls = 0;
                frame++;
            }
            if (frame == 10) bowls = 2;
        } else if (c == '/') {
            totalScore += 10 - (input[bowls - 1] - '0');
            spare = true;
        } else if (c == '-') {
            bowls++;
        } else {
            totalScore += c - '0';
            if (spare) {
                totalScore += c - '0';
                spare = false;
            }
            bowls++;
        }
        
        if (!spare && bowls == 2) {
            bowls = 0;
            frame++;
        }
    }
    
    return totalScore;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}