int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') {
            string first = s.substr(0, i);
            string second = s.substr(i + 1);
            if (first[0] == 'X') {
                score += 10 + (second[0] - '0' + second[1] - '0');
            } else if (first[0] == '1' || first[0] == '2' || first[0] == '3' || first[0] == '4' || first[0] == '5' || first[0] == '6' || first[0] == '7' || first[0] == '8' || first[0] == '9') {
                score += (first[0] - '0' + first[1] - '0') * 2;
            } else if (first[0] == 'S' && first[1] == 'P') {
                score += 10 + (second[0] - '0' + second[1] - '0');
            }
            currentFrame++;
        }
    }
    return score;
}