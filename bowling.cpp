int main() {
    string input;
    cin >> input;
    int score = 0;
    int frame = 0;
    int balls = 0;
    vector<int> points(12, 0);
    
    for (char c : input) {
        if (c == 'X') {
            points[frame] = 10;
            frame++;
        } else if (c == '/') {
            points[frame] = 10 - points[frame - 1];
            frame++;
            balls = 0;
        } else if (c == '-') {
            points[frame] = 0;
            balls++;
        } else {
            points[frame] += c - '0';
            balls++;
        }
        
        if ((c == 'X' && balls == 1) || balls == 2) {
            frame++;
            balls = 0;
        }
        
        if (frame == 10) {
            break;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        score += points[i];
        if (points[i] == 10) {
            if (points[i + 1] == 10) {
                score += points[i + 1] + points[i + 2];
            } else {
                score += points[i + 1];
            }
        } else if (points[i] + points[i + 1] == 10) {
            score += points[i + 2];
        }
    }
    
    cout << score << endl;
    
    return 0;
}