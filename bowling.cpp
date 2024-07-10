int scoreBowlingRound(string input){
    int score = 0, frame = 1, ball = 1;
    for (char c : input) {
        if (c == 'X' || c == '/') {
            score += 10;
            if (frame < 10)
                score += (c == 'X') ? (input[ball] == 'X' ? 10 + (input[ball+1] == '/' ? 10 : (input[ball+1] == '-' ? 0 : input[ball+1] - '0')) : (input[ball+1] == '/' ? 10 : (input[ball+1] == '-' ? 0 : input[ball] - '0' + input[ball+1] - '0'))) : input[ball] - '0';
            ball += (c == 'X') ? 1 : 0;
        } else if (c == '-') {
            ball++;
        } else {
            score += c - '0';
        }
        ball++;
        if (frame < 10 && (c == '/' || ball == 2)) {
            ball = 1;
            frame++;
        }
    }
    return score;
}

int main(){
    string input;
    cin >> input;
    cout << scoreBowlingRound(input) << endl;
    return 0;
}