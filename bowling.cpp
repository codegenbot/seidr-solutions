int calculateScore(const string& frames) {
    int score = 0;
    int frameIndex = 0;
    int rolls = 0;
    
    for (int frame = 0; frame < 10; ++frame) {
        if (frames[frameIndex] == 'X') { // Strike
            score += 10 + (frames[frameIndex + 1] == 'X' ? 10 : (frames[frameIndex + 1] == '/' ? 10 : frames[frameIndex + 1] - '0')) 
                        + (frames[frameIndex + 2] == 'X' ? 10 : (frames[frameIndex + 2] == '/' ? 10 : frames[frameIndex + 2] - '0'));
            frameIndex++;
        } else if (frames[frameIndex + 1] == '/') { // Spare
            score += 10 + (frames[frameIndex + 2] == 'X' ? 10 : frames[frameIndex + 2] - '0');
            frameIndex += 2;
        } else { // Open frame
            score += (frames[frameIndex] - '0') + (frames[frameIndex + 1] - '0');
            frameIndex += 2;
        }
    }
    return score;
}

int main() {
    string input;
    while (getline(cin, input)) {
        cout << calculateScore(input) << endl;
    }
    return 0;
}