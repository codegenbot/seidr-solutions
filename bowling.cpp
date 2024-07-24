int bowlingScore(string s) {
    int score = 0;
    int currentFrame = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '/') {
            string str = s.substr(0, i);
            s.erase(0, i+1);
            int strike = (str[0] == 'X');
            int spare = false;
            for (int j = 0; j < str.length(); j++) {
                if (isdigit(str[j])) {
                    int pin = str[j] - '0';
                    if (!strike) {
                        score += pin;
                        currentFrame++;
                        if (currentFrame > 10) break;
                    }
                    else strike--;
                }   
            }
        }
    }
    return score;
}