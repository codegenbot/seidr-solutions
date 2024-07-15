using namespace std;

int bowlingScore(string s) {
    int score = 0;
    int roll = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'X') {
            score += 10 + (roll < 1 ? 10 : 10 - roll);
            roll = 0;
        } else if(s[i] == '/') {
            int nextRoll = s[i+1]-'0';
            score += 10 - nextRoll;
            i++;
            roll = 0;
        } else {
            roll++;
            if(roll > 2) {
                score += (s[i]-'0');
            }
        }
    }
    return score;