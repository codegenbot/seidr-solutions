int main() {
    string input;
    cin >> input;
    
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> frames;
    
    for(char c : input) {
        if(c == 'X') {
            frames.push_back(10);
            frame++;
            ball = 0;
        } else if(c == '/') {
            frames.push_back(10 - frames.back());
            frame++;
            ball = 0;
        } else if(c == '-') {
            frames.push_back(0);
            ball++;
            if(ball == 2) {
                frame++;
                ball = 0;
            }
        } else {
            int pins = c - '0';
            frames.push_back(pins);
            ball++;
            if(ball == 2) {
                frame++;
                ball = 0;
            }
        }
        
        if(frame > 10) break;
    }
    
    for(int i = 0; i < 10; i++) {
        if(frames[i] == 10) {
            score += 10 + frames[i+1] + frames[i+2];
        } else if(frames[i] + frames[i+1] == 10) {
            score += 10 + frames[i+2];
            i++;
        } else {
            score += frames[i] + frames[i+1];
            i++;
        }
    }
    
    cout << score << endl;
    
    return 0;
}