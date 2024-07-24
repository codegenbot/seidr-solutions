int score(string bowls) {
    int totalScore = 0;
    int frame = 1;
    int bowlIndex = 0;

    for (int i = 0; i < 10; ++i) {
        if (bowls[bowlIndex] == 'X') {
            totalScore += 10;
            totalScore += (bowls[bowlIndex + 1] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 1]) ? bowls[bowlIndex + 1] - '0' : 10);
            totalScore += (bowls[bowlIndex + 2] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 2]) ? bowls[bowlIndex + 2] - '0' : 10);
            bowlIndex += 1;
        } else if (bowls[bowlIndex + 1] == '/') {
            totalScore += 10;
            totalScore += (bowls[bowlIndex + 2] == 'X') ? 10 : (isdigit(bowls[bowlIndex + 2]) ? bowls[bowlIndex + 2] - '0' : 10);
            bowlIndex += 2;
        } else {
            totalScore += (isdigit(bowls[bowlIndex]) ? bowls[bowlIndex] - '0' : 0);
            totalScore += (isdigit(bowls[bowlIndex + 1]) ? bowls[bowlIndex + 1] - '0' : 0);
            bowlIndex += 2;
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