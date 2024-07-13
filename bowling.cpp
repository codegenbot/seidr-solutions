int score(string frames) {
    int totalScore = 0;
    int frameIndex = 0;
    
    for (int i = 0; i < 10; ++i) {
        if (frames[frameIndex] == 'X') {
            totalScore += 10 + (frames[frameIndex + 1] == 'X' ? 10 : (frames[frameIndex + 1] == '/' ? 10 - (frames[frameIndex + 2] - '0') : frames[frameIndex + 1] - '0' + frames[frameIndex + 2] - '0'));
            ++frameIndex;
        } else if (frames[frameIndex + 1] == '/') {
            totalScore += 10 + (frames[frameIndex + 2] == 'X' ? 10 : frames[frameIndex + 2] - '0');
            frameIndex += 2;
        } else {
            totalScore += (frames[frameIndex] - '0' + frames[frameIndex + 1] - '0');
            frameIndex += 2;
        }
    }
    
    return totalScore;
}

int main() {
    string frames;
    cin >> frames;
    cout << score(frames) << endl;
    return 0;
}