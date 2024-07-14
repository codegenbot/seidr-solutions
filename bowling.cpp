int bowling(string s) {
    int score = 0;
    int frame = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X' || s[i] == '/') {
            if (frame > 0 && s[i-1] != ' ') {
                score += calculate_frame_score(s.substr(i-1,2));
            } else {
                score += calculate_single_roll(s[i]);
            }
            frame++;
        }
    }

    return score;
}

int calculate_frame_score(string s) {
    int roll1 = stoi(s.substr(0,1));
    if (s[1] == '/') {
        return 10 + calculate_single_roll(s[2]);
    } else {
        int roll2 = stoi(s.substr(1,1));
        return roll1 + roll2;
    }
}

int calculate_single_roll(char c) {
    return stoi(string(1,c)) + 5;
}