int bowling(string s) {
    int score = 0;
    int current_frame_score = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            int first_roll = stoi(s.substr(0, i));
            int second_roll = stoi(s.substr(i + 1));
            if (second_roll == 10) {
                score += 10 + (current_frame_score > 1 ? 0 : 20);
            } else {
                score += first_roll + second_roll;
            }
            current_frame_score = 0;
        } else if (s[i] != 'X') {
            int roll = stoi(s.substr(i, 1));
            score += roll;
            current_frame_score += roll;
        } else {
            score += 10;
            current_frame_score = 10;
        }
    }
    return score;
}