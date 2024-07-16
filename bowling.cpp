int score(string s) {
    int res = 0, frame = 0, ball = 0;
    vector<int> game(21, 0);
    for(char c : s) {
        if(c == 'X') game[ball] = 10;
        else if(c == '/') game[ball] = 10 - game[ball-1];
        else if(c == '-') game[ball] = 0;
        else game[ball] = c - '0';
        if(frame > 0 && (game[ball] == 10 || ball % 2 == 1)) res += game[ball] + game[ball-1] + game[ball-2];
        if(frame > 1 && ball % 2 == 1 && game[ball-1] + game[ball-2] == 10) res += game[ball];
        if(ball < 18) {
            ball++;
            if(ball % 2 == 0) frame++;
        } else if(ball == 18) {
            ball++;
            if(c != 'X') frame++;
        }
    }
    return res;
}

int main() {
    string input;
    cin >> input;
    cout << score(input) << endl;
    return 0;
}