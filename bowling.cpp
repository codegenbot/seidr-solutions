int score(string bowls) {
    int totalScore = 0;
    int frame = 1;
    
    for (int i = 0; i < bowls.size(); ++i) {
        if (bowls[i] == 'X') {
            totalScore += 10;
            if (frame < 10) {
                totalScore += (bowls[i+1] == 'X') ? 10 : (bowls[i+1] - '0');
                if (bowls[i+2] == '/') {
                    totalScore += 10 - (bowls[i+1] == 'X' ? 0 : (bowls[i+1] - '0'));
                } else if (bowls[i+2] == 'X') {
                    totalScore += 10;
                } else {
                    totalScore += (bowls[i+2] == '-' ? 0 : (bowls[i+2] - '0'));
                }
            }
            frame++;
        } else if (bowls[i] == '/') {
            totalScore += 10 - (bowls[i-1] - '0');
            totalScore += (bowls[i+1] == 'X') ? 10 : (bowls[i+1] - '0');
            frame++;
        } else if (bowls[i] == '-') {
            // do nothing for a miss
        } else {
            totalScore += bowls[i] - '0';
            frame++;
        }
    }
    
    return totalScore;
}

int main() {
    string bowls;
    cin >> bowls;

    cout << score(bowls) << endl;

    return 0;
}