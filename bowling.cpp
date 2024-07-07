using namespace std;

int bowlingScore(string str) {
    int score = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '/') {
            if (i + 2 <= str.length()) {
                score += (10 - (str[i + 1] - '0')) + (str[i + 2] - '0');
                i++;
            } else {
                score += 10;
            }
        } else if (isdigit(str[i])) {
            score += (str[i] - '0');
        }
    }
    return score;