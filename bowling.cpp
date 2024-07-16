int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    for (int i = 0; i < 10; ++i) {
        if (bowls[bowlIndex] == 'X') {
            score += 10;
            score += (bowls[bowlIndex + 1] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 1]) ? bowls[bowlIndex + 1] - '0' : 10);
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (bowls[bowlIndex + 2] == '/' ? 10 - (bowls[bowlIndex + 1] - '0') : (isdigit(bowls[bowlIndex + 2]) ? bowls[bowlIndex + 2] - '0' : 10));
            bowlIndex += 1;
        } else if (bowls[bowlIndex + 1] == '/') {
            score += 10;
            score += (bowls[bowlIndex + 2] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 2]) ? bowls[bowlIndex + 2] - '0' : 10);
            bowlIndex += 2;
        } else {
            score += (isdigit(bowls[bowlIndex]) ? bowls[bowlIndex] - '0' : 0);
            score += (isdigit(bowls[bowlIndex + 1]) ? bowls[bowlIndex + 1] - '0' : 0);
            bowlIndex += 2;
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