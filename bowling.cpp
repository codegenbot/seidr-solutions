using namespace std;

int bowlingScore(string str) {
    int score = 0;
    for (char c : str) {
        if (c == '/') {
            if (score % 2 != 1) {
                score += 10 - (str[str.find(c) - 1] - '0');
            }
            else {
                score += 10;
            }
        } 
        else if (isdigit(c)) {
            score += c - '0';
        } 
    }
    return score;
}