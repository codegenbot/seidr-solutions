int scoreOfBowlingRound(string s) {
    int score = 0;
    int frame = 0;
    int rolls = 0;
    vector<int> points;
    
    for (char c : s) {
        if (c == 'X') {
            points.push_back(10);
            rolls++;
            if (rolls == 2 || frame == 9) {
                score += points[frame] + points[frame + 1] + points[frame + 2];
                frame++;
                rolls = 0;
            }
        } else if (c == '/') {
            points.push_back(10 - points[frame - 1]);
            rolls++;
            if (rolls == 2 || frame == 9) {
                score += points[frame] + points[frame + 1];
                frame++;
                rolls = 0;
            }
        } else if (c == '-') {
            points.push_back(0);
            rolls++;
            if (rolls == 2 || frame == 9) {
                score += points[frame];
                frame++;
                rolls = 0;
            }
        } else {
            points.push_back(c - '0');
            rolls++;
            if (rolls == 2 || frame == 9) {
                score += points[frame] + points[frame + 1];
                frame++;
                rolls = 0;
            }
        }
    }
    
    return score;
}

int main() {
    string s;
    cin >> s;
    cout << scoreOfBowlingRound(s) << endl;
    return 0;
}