int calculateScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int i = 0;
    
    while (i < bowls.size() && frame <= 10) {
        if (bowls[i] == 'X') {
            score += 10;
            score += (bowls[i + 1] == 'X') ? 10 : (bowls[i + 1] == '/') ? 10 : (bowls[i + 1] - '0');
            score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] == '/') ? 10 : (bowls[i + 2] - '0');
            i++;
        } else if (bowls[i + 1] == '/') {
            score += 10;
            score += (bowls[i + 2] == 'X') ? 10 : (bowls[i + 2] - '0');
            i += 2;
        } else {
            score += (bowls[i] == '-') ? 0 : (bowls[i] - '0');
            score += (bowls[i + 1] == '-') ? 0 : (bowls[i + 1] - '0');
            i += 2;
        }
        frame++;
    }
    
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateScore(bowls) << endl;
    
    return 0;
}