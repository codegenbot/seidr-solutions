int bowlingScore(string s) {
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] == '/') {
            int prevFrame = s.substr(0, i).count('X') + s.substr(0, i).count('/'); // Count the number of X and / in the previous frame
            score += 10 + prevFrame;
            s.erase(0, i+1); // Erase the processed part from the string
        } else if (s[i] == 'X') {
            score += 10; // For a strike, add 10 points directly
            s.erase(0, i+1); // Erase the processed part from the string
        } else {
            int prevFrame = s.substr(0, i).count('X') + s.substr(0, i).count('/'); // Count the number of X and / in the previous frame
            score += 10 - prevFrame; // Add the points for this frame
            s.erase(0, i+1); // Erase the processed part from the string
        }
    }
    return score;
}