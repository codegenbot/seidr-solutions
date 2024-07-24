int bowling_score(const string& bowls) {
    int score = 0;
    int frame = 0;
    for (int i = 0; i < bowls.size() && frame < 10; ++i) {
        if (bowls[i] == 'X') {
            score += 10;
            score += (bowls[i + 1] == 'X' ? 10 : (isdigit(bowls[i + 1]) ? bowls[i + 1] - '0' : 10 - (bowls[i + 1] == '/' ? 0 : 10)));
            score += (bowls[i + 2] == 'X' ? 10 : (isdigit(bowls[i + 2]) ? bowls[i + 2] - '0' : 10 - (bowls[i + 2] == '/' ? 0 : 10)));
            ++frame;
        } else if (bowls[i] == '/') {
            score += 10 - (isdigit(bowls[i - 1]) ? bowls[i - 1] - '0' : 10);
            score += (isdigit(bowls[i + 1]) ? bowls[i + 1] - '0' : 10 - (bowls[i + 1] == 'X' ? 0 : 10));
            ++frame;
        } else if (isdigit(bowls[i])) {
            score += bowls[i] - '0';
            if (isdigit(bowls[i + 1])) {
                score += bowls[i + 1] - '0';
                if (bowls[i] - '0' + bowls[i + 1] - '0' == 10) {
                    score += (isdigit(bowls[i + 2]) ? bowls[i + 2] - '0' : 10 - (bowls[i + 2] == 'X' ? 0 : 10));
                }
                ++i;
            }
            ++frame;
        }
    }
    return score;
}

int main() {
    string bowls;
    cin >> bowls;
    cout << bowling_score(bowls) << endl;
    return 0;
}