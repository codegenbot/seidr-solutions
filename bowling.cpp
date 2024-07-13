int score_bowling(const string& bowls) {
    int score = 0;
    int frame = 0;
    int throwIndex = 0;

    for (int i = 0; i < 10; i++) {
        if (bowls[throwIndex] == 'X') {
            score += 10;
            score += (bowls[throwIndex + 1] == 'X') ? 10 : 
                     ((bowls[throwIndex + 1] == '/') ? 10 - bowls[throwIndex + 2] + 48 : bowls[throwIndex + 1] - 48 + bowls[throwIndex + 2] - 48);
            throwIndex++;
        } else if (bowls[throwIndex + 1] == '/') {
            score += 10;
            score += (bowls[throwIndex + 2] == 'X') ? 10 : bowls[throwIndex + 2] - 48;
            throwIndex += 2;
        } else {
            score += bowls[throwIndex] - 48 + bowls[throwIndex + 1] - 48;
            throwIndex += 2;
        }
        frame++;
    }

    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << score_bowling(bowls) << endl;
    return 0;
}