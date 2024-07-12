int score(const string& bowls) {
    int totalScore = 0;
    int frame = 1;
    int bowlIndex = 0;
    
    for (int i = 0; i < 10; ++i) {
        if (bowls[bowlIndex] == 'X') {
            totalScore += 10 + (bowls[bowlIndex + 1] == 'X' ? 10 : (bowls[bowlIndex + 1] == '/' ? 10 - (bowls[bowlIndex + 2] - '0') : bowls[bowlIndex + 1] - '0' + bowls[bowlIndex + 2] - '0'));
            ++bowlIndex;
        } else if (bowls[bowlIndex + 1] == '/') {
            totalScore += 10 + (bowls[bowlIndex + 2] == 'X' ? 10 : bowls[bowlIndex + 2] - '0');
            bowlIndex += 2;
        } else {
            totalScore += bowls[bowlIndex] - '0' + bowls[bowlIndex + 1] - '0';
            bowlIndex += 2;
        }
        ++frame;
    }
    
    return totalScore;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << score(bowls) << endl;
    
    return 0;
}