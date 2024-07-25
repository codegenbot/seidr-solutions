int score(const string& frame) {
    int total = 0;
    int frameIndex = 0;
    for (int i = 0; i < 10; ++i) {
        if (frame[frameIndex] == 'X') {
            total += 10 + (frame[frameIndex + 1] == 'X' ? 10 : (frame[frameIndex + 1] == '/' ? 10 - (frame[frameIndex + 2] - '0') : frame[frameIndex + 1] - '0' + frame[frameIndex + 2] - '0'));
            frameIndex++;
        } else if (frame[frameIndex + 1] == '/') {
            total += 10 + (frame[frameIndex + 2] == 'X' ? 10 : frame[frameIndex + 2] - '0');
            frameIndex += 2;
        } else {
            total += frame[frameIndex] - '0' + frame[frameIndex + 1] - '0';
            frameIndex += 2;
        }
    }
    return total;
}

int main() {
    string frame;
    cin >> frame;
    cout << score(frame) << endl;
    return 0;
}