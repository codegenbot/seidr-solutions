int main() {
    string input;
    cin >> input;
    
    int score = 0;
    int frame = 1;
    int ball = 0;
    vector<int> points(22, 0);
    
    for(char c : input) {
        if(c == 'X') {
            points[ball++] = 10;
            points[ball++] = 0;
            frame++;
        } else if(c == '/') {
            points[ball-1] = 10 - points[ball-2];
            frame++;
        } else if(c == '-') {
            points[ball++] = 0;
        } else {
            points[ball++] = c - '0';
            if(ball % 2 == 0) {
                if(points[ball-1] + points[ball-2] >= 10) {
                    frame++;
                } else {
                    frame += 0.5;
                }
            }
        }
    }
    
    for(int i = 0; i < frame; i++) {
        if(points[i*2] == 10) {
            score += 10 + points[i*2+2] + points[i*2+3];
        } else if(points[i*2] + points[i*2+1] == 10) {
            score += 10 + points[i*2+2];
        } else {
            score += points[i*2] + points[i*2+1];
        }
    }
    
    cout << score << endl;
    
    return 0;
}