int bowlingScore(string s) {
    int score = 0;
    int frame = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '/') {
            string str1 = s.substr(0, i);
            string str2 = s.substr(i+1);
            int first = stoi(str1);
            int second = stoi(str2);
            score += (first + (second > 10 ? 10 : second));
            frame++;
        }
    }
    return score;
}