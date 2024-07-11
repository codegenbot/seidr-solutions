int score(string rolls) {
    int totalScore = 0;
    int frameIndex = 0;
    
    for (int frame = 0; frame < 10; ++frame) {
        if(rolls[frameIndex] == 'X') {
            totalScore += 10 + (rolls[frameIndex + 1] == 'X' ? 10 + (rolls[frameIndex + 2] == 'X' ? 10 : (rolls[frameIndex + 2] == '-' ? 0 : rolls[frameIndex + 2] - '0')) : (rolls[frameIndex + 1] == '/' ? 10 : (rolls[frameIndex + 1] == '-' ? 0 : rolls[frameIndex + 1] - '0') + (rolls[frameIndex + 2] == '-' ? 0 : rolls[frameIndex + 2] - '0')));
            frameIndex++;
        } else if (rolls[frameIndex + 1] == '/') {
            totalScore += 10 + (rolls[frameIndex + 2] == 'X' ? 10 : (rolls[frameIndex + 2] == '-' ? 0 : rolls[frameIndex + 2] - '0'));
            frameIndex += 2;
        } else {
            totalScore += (rolls[frameIndex] == '-' ? 0 : rolls[frameIndex] - '0') + (rolls[frameIndex + 1] == '-' ? 0 : rolls[frameIndex + 1] - '0');
            frameIndex += 2;
        }
    }
    
    return totalScore;
}

int main() {
    string rolls;
    getline(cin, rolls);
    
    cout << score(rolls) << endl;
    
    return 0;
}