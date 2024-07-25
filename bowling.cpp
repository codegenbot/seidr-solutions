int score(string s) {
    int total = 0;
    int frame = 0;
    int rolls[21] = {0};
    
    for(int i=0; i < s.size(); i++) {
        if(s[i] == 'X') {
            rolls[frame] = 10;
            frame++;
        }
        else if(s[i] == '/') {
            rolls[frame] = 10 - rolls[frame-1];
            frame++;
        }
        else if(s[i] == '-') {
            rolls[frame] = 0;
            frame++;
        }
        else {
            rolls[frame] = s[i] - '0';
            frame++;
        }
    }
    
    for(int i=0, r=0; i<10; i++) {
        if(rolls[r] == 10) {
            total += 10 + rolls[r+1] + rolls[r+2];
            r++;
        }
        else if(rolls[r] + rolls[r+1] == 10) {
            total += 10 + rolls[r+2];
            r += 2;
        }
        else {
            total += rolls[r] + rolls[r+1];
            r += 2;
        }
    }
    return total;
}

int main() {
    string s;
    cin >> s;
    cout << score(s) << endl;
    return 0;
}