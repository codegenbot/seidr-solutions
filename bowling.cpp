int calculateBowlingScore(string str) {
    int score = 0;
    int frame = 0;
    int frameScore[10] = {0};
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'X') {
            frameScore[frame] += 10;
            if (frame < 8) {
                frameScore[frame] += frameScore[frame + 1];
                if (str[i + 2] == 'X')
                    frameScore[frame] += 10;
                else if (str[i + 2] == '/')
                    frameScore[frame] += 10 - (str[i + 1] - '0');
                else
                    frameScore[frame] += str[i + 1] - '0' + str[i + 2] - '0';
            } else if (frame == 8) {
                frameScore[8] += frameScore[9];
                frameScore[8] += str[i + 1] == 'X' ? 10 : str[i + 1] - '0';
                frameScore[8] += str[i + 2] == 'X' ? 10 : str[i + 2] == '/' ? 10 - (str[i + 1] - '0') : str[i + 2] - '0';
            }
            frame++;
        } else if (str[i] == '/') {
            frameScore[frame] += 10 - (str[i - 1] - '0');
        } else {
            frameScore[frame] += str[i] - '0';
        }
    }
    for (int i = 0; i < 10; ++i) {
        score += frameScore[i];
    }
    return score;
}

int main() {
    string str;
    cin >> str;
    cout << calculateBowlingScore(str) << endl;
    return 0;
}