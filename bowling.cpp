int bowlingScore(string s) {
    int score = 0;
    for(int i = 0; i < 10; i++) {
        if(s[i] == '/') {
            string first = s.substr(0, i);
            string second = s.substr(i+1);
            if(first[0] == 'X') {
                score += 30;
            } else if(killStrike(first)) {
                score += 10 + strikeBonus(second);
            } else {
                score += strikeValue(first) + strikeBonus(second);
            }
        } else if(s[i] == 'X') {
            score += 30;
        } else if(killStrike(string(1, s[i]))){
            score += 10 + strikeBonus(s.substr(i+1));
        } else {
            score += strikeValue(string(1, s[i])) + strikeBonus(s.substr(i+1));
        }
    }
    return score;
}

bool killStrike(string s) {
    if(s.length() < 2) return false;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != 'X' && s[i] != '/') return false;
    }
    return true;
}

int strikeValue(string s) {
    int sum = 0;
    for(int i = 0; i < s.length(); i++) {
        sum += s[i] - '0';
    }
    return sum;
}

int strikeBonus(string s) {
    int sum = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '/') break;
        sum += s[i] - '0';
    }
    return sum;
}