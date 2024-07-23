using namespace std;

int bowlingScore(string s) {
    int score = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10 - (s.find('/')-s.rfind('S'))%2;
        } else {
            int count = c - '0';
            while (count--) {
                score += 10;
            }
        }
    }
    return score;