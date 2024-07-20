using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int currentRoll = 0;
    int spareOrStrike = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
            currentRoll = 0;
            spareOrStrike++;
        } else if (c == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
            spareOrStrike++;
        } else {
            currentRoll = currentRoll * 10 + (c - '0') * 10;
        }
    }
    
    for(int i=1; i<=s.size(); i++) {
        if(spareOrStrike > 1) break;
        if(i<s.size() && s[i] == 'X' || (i+1<s.size() && s[i] == '/' && s[i+1] == 'X')) {
            score += 20 + currentRoll;
            currentRoll = 0;
            spareOrStrike++;
        } else if(i<s.size() && s[i] == '/') {
            score += 10 + currentRoll;
            currentRoll = 0;
            spareOrStrike++;
        }
    }
    
    return score;