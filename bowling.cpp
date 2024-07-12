int calculateBowlingScore(const string& bowls) {
    int score = 0;
    int frame = 0;
    int throwIndex = 0;
    
    while (frame < 10) {
        if (bowls[throwIndex] == 'X') {
            score += 10;
            score += (bowls[throwIndex + 1] == 'X') ? 10 : (isdigit(bowls[throwIndex + 1]) ? bowls[throwIndex + 1] - '0' : 10);
            score += (bowls[throwIndex + 2] == 'X') ? 10 : (isdigit(bowls[throwIndex + 2]) ? bowls[throwIndex + 2] - '0' : 10);
            throwIndex++;
        } else if (bowls[throwIndex + 1] == '/') {
            score += 10;
            score += (bowls[throwIndex + 2] == 'X') ? 10 : (isdigit(bowls[throwIndex + 2]) ? bowls[throwIndex + 2] - '0' : 10);
            throwIndex += 2;
        } else {
            score += (isdigit(bowls[throwIndex]) ? bowls[throwIndex] - '0' : 0);
            score += (isdigit(bowls[throwIndex + 1]) ? bowls[throwIndex + 1] - '0' : 0);
            throwIndex += 2;
        }
        frame++;
    }
    
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << calculateBowlingScore(bowls) << endl;
    
    return 0;
}