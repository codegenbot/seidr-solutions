using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll1, roll2;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') { // strike
            score += 10 + bowlingForStrike(s.substr(i+1));
        } else if (s[i] == '/') { // spare
            int j = i;
            while (j < s.length() && s[j] != '/') j++;
            roll1 = s[i+1] - '0';
            roll2 = s[j-1] - '0';
            score += 10 + roll1 + roll2;
        } else { // normal
            int j = i;
            while (j < s.length() && s[j] >= '0' && s[j] <= '9') j++;
            roll1 = s[i] - '0';
            if (s[j-1] == '/') break; // spare
            roll2 = s[j-1] - '0';
            score += roll1 + roll2;
        }
    }

    return score;
}

int bowlingForStrike(string s) {
    int score = 10;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') { // strike
            score += 10 + bowlingForStrike(s.substr(i+1));
        } else if (s[i] == '/') { // spare
            int j = i;
            while (j < s.length() && s[j] != '/') j++;
            score += 10 + s[i+1] - '0' + s[j-1] - '0';
            break; // spare
        } else { // normal
            score += s[i] - '0';
        }
    }

    return score;
}