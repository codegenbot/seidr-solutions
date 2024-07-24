int scoreBowlingRound(const string& bowls) {
    int score = 0;
    int frame = 1;
    int i = 0;
    
    while (frame <= 10) {
        if (bowls[i] == 'X') {
            score += 10 + ((bowls[i+1] == 'X') ? 10 + ((bowls[i+2] == 'X') ? 10 : (bowls[i+2] - '0')) : (bowls[i+2] == '/' ? 10 : (bowls[i+2] - '0' + bowls[i+3] - '0')));
            i++;
        } else if (bowls[i+2] == '/') {
            score += 10 + (bowls[i+4] == 'X' ? 10 : (bowls[i+4] - '0'));
            i += 3;
        } else {
            score += bowls[i] - '0' + bowls[i+1] - '0';
            i += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string bowls;
    getline(cin, bowls);

    cout << scoreBowlingRound(bowls) << endl;

    return 0;
}