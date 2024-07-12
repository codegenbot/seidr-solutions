int scoreBowlRound(const string& bowls) {
    int score = 0;
    int frame = 0;
    int ball = 0;
    vector<int> frames(10, 0);

    for(int i=0; i<bowls.size(); i++) {
        if(bowls[i] == 'X') {
            frames[frame] = 10 + (i+1 < bowls.size() ? 
                (bowls[i+1] == 'X' ? 10 : 
                    (isdigit(bowls[i+1]) ? bowls[i+1]-'0' : 10)) : 0) +
                (i+2 < bowls.size() ? 
                    (bowls[i+2] == 'X' ? 10 : 
                        (isdigit(bowls[i+2]) ? bowls[i+2]-'0' : 10)) : 0);
            frame++;
        } else if(bowls[i] == '/') {
            frames[frame] = 10 + (isdigit(bowls[i+1]) ? bowls[i+1]-'0' : 10);
            frame++;
            i++;
        } else if(isdigit(bowls[i])) {
            frames[frame] += bowls[i] - '0';
            ball++;
            if(ball % 2 == 0) {
                frame++;
            }
        }
    }

    for(int i=0; i<10; i++) {
        score += frames[i];
    }

    return score;
}