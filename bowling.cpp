int scoreBowlingGame(const string &game) {
    int score = 0, frame = 0, i = 0;
    while (frame < 10) {
        if (game[i] == 'X') {
            score += 10 + (game[i + 1] == 'X' ? 10 : (game[i + 1] == '/' ? 10 - (game[i + 1 - 1] - '0') : (game[i + 1] == '-' ? 0 : game[i + 1] - '0'))) + (game[i + 2] == 'X' ? 10 : (game[i + 2] == '/' ? 10 - (game[i + 1] - '0') : (game[i + 2] == '-' ? 0 : game[i + 2] - '0')));
            i++;
        } else if (game[i + 1] == '/') {
            score += 10 + (game[i + 2] == 'X' ? 10 : (game[i + 2] == '-' ? 0 : game[i + 2] - '0'));
            i += 2;
        } else {
            score += (game[i] == '-' ? 0 : game[i] - '0') + (game[i + 1] == '-' ? 0 : game[i + 1] - '0');
            i += 2;
        }
        frame++;
    }
    return score;
}

int main() {
    string game;
    while (getline(cin, game)) {
        cout << scoreBowlingGame(game) << endl;
    }
    return 0;
}