int score = 0;
string s = "X/X/5+7-3-1/2+4/X/2-8-X/2+6/X";
for(int i = 0; i < s.length(); i++) {
    char c = s[i];
    if (c == '/') {
        score += getRoll(s, i) + getBonusRoll(s, i);
    } else if (c == 'X' || c == 'x') {
        score += min(i+1, 10);
    } else if (isdigit(c)) {
        int roll = getRoll(s, i);
        if (s[i+1] == '+') {
            score += roll + max(min(getBonusRoll(s, i) - roll - 1, 9), 0);
        } else {
            score += roll;
        }
    }
}
return score;

int getRoll(string s, int i) {
    if(i >= s.length() - 1) return 0; // handle out of bounds
    if (s[i+1] == '/') {
        return 10;
    } else {
        for(int j = i + 1; ; j++) { 
            if (!isdigit(s[j])) {
                return min(j - i, 10);
            }
        }
    }
}

int getBonusRoll(string s, int i) {
    if(i >= s.length() - 1) return 0; // handle out of bounds
    for(int j = i + 2; ; j++) { 
        if (!isdigit(s[j]) && (s[j] == '+' || s[j] == '-')) {
            return min(j - i - 1, 9);
        }
    }
}