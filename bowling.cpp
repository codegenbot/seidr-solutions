int bowling(string s) {
    int score = 0;
    int current_frame = 1;
    int rolls_in_frame = 0;

    for (char c : s) {
        if (c == 'X') { // strike
            score += 10 + bonus_for_previous_frame();
            current_frame++;
            rolls_in_frame = 0;
        } else if (c == '/') { // spare
            score += 10 - rolls_in_frame;
            current_frame++;
            rolls_in_frame = 0;
        } else { // normal roll
            int roll = c - '0';
            score += roll;
            rolls_in_frame++;
            if (rolls_in_frame < 2) {
                current_frame++;
            }
        }
    }

    return score;
}

int bonus_for_previous_frame() {
    if (current_frame == 1)
        return 0; // first frame, no bonus
    else if (rolls_in_frame == 2)
        return 10; // spare in previous frame, bonus is 10
    else
        return sum_of_last_two_rolls(); // strike or normal roll in previous frame, bonus is the sum of last two rolls
}

int sum_of_last_two_rolls() {
    int s = 0;
    for (char c : s.substr(s.length()-2)) {
        if (c == 'X') 
            s += 10; 
        else if (c == '/')
            s += 10 - 1;
        else
            s += c-'0';
    }
    return s;
}