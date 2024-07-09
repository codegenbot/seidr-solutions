int bowlingScore(string s) {
    int score = 0;
    int rolls = 0;
    string frames[10];
    int i = 0;
    
    // Parse input string into individual frames
    while (i < s.length()) {
        if (s[i] == 'X') { // Strike
            frames[rolls++] = "X";
            score += 10 + getExtraRoll(rolls);
        } else if (isdigit(s[i])) {
            int j = i;
            int frame = 0, pins = 0;
            
            // Read current frame
            while (j < s.length() && !isspace(s[j])) {
                if (s[j] == 'X') {
                    frames[rolls++] = "X";
                    score += 10 + getExtraRoll(rolls);
                    j = s.length();
                    break;
                } else if (isdigit(s[j])) {
                    frame++;
                    pins = 2 * (s[j] - '0');
                    if (j < s.length() - 1 && s[j+1] == '/') {
                        i = j; // Stop parsing current frame
                        j = s.length();
                        break;
                    } else {
                        i = j; // Stop parsing current frame
                        j = s.length();
                        break;
                    }
                }
            }
            
            if (frame < 2) { // Non-strike or spare
                frames[rolls++] = to_string(pins);
                score += pins + getExtraRoll(rolls);
            } else { // Spare
                frames[rolls++] = to_string(pins) + "/";
                score += pins + 10 + getExtraRoll(rolls+1);
            }
        }
        
        i++;
    }
    
    return score;
}

int getExtraRoll(int frame) {
    if (frame < 3) { // First or second roll after spare/strike
        return 0;
    } else if (frame == 10 && frames[9] != "X" && !frames[8].ends_with("/")) { // Last frame and not strike, so no extra roll
        return 0;
    } else {
        int score = 0;
        
        for (int i = 8; i >= 0; i--) {
            if (frames[i] == "X" || frames[i].ends_with("/")) break;
            score += std::stoi(frames[i]);
        }
        
        return score;
    }
}