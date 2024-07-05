int scoreBowling(const string& frames) {
    int score = 0, frame = 0;
    for (size_t i = 0; i < frames.size() && frame < 10; ++i) {
        if (frames[i] == 'X') { // Strike
            score += 10;
            if (i + 1 < frames.size()) score += (frames[i + 1] == 'X' ? 10 : (frames[i + 1] == '/' ? 10 - (frames[i] - '0') : (frames[i + 1] - '0')));
            if (i + 2 < frames.size()) score += (frames[i + 2] == 'X' ? 10 : (frames[i + 2] == '/' ? 10 - (frames[i + 1] - '0') : (frames[i + 2] - '0')));
            frame++;
        } else if (frames[i] == '/') { // Spare
            score += 10 - (frames[i - 1] - '0');
            if (i + 1 < frames.size()) score += (frames[i + 1] == 'X' ? 10 : (frames[i + 1] - '0'));
            frame++;
        } else if (frames[i] == '-') { // Miss
            frame += (i > 0 && frames[i - 1] != 'X' && frames[i - 1] != '/') ? 1 : 0;
        } else { // Number
            score += (frames[i] - '0');
            frame += (i > 0 && (frames[i - 1] != 'X' && frames[i - 1] != '/' && frames[i - 1] != '-')) ? 1 : 0;
        }
    }
    return score;
}

int main() {
    string input;
    while (cin >> input) {
        cout << scoreBowling(input) << endl;
    }
    return 0;
}