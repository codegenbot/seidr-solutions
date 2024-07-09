```cpp
int bowlingScore(string s) {
    int score = 0;
    for (char c : s) {
        if (c == 'X') {
            score += 30;
        } else if (c == '/') {
            score += 10; 
        } else if (c >= '1' && c <= '9') {
            int roll = c - '0';
            if ((s[s.size() - 2] == '/') || (s[s.size() - 2] == 'X')) {
                score += roll * 2; 
            } else {
                score += roll;
            }
        }
    }

    return score;
}

int main() {
    string s = "X/X/5-4/10/-9/-8/X/X/6+3/7-2";
    int result = bowlingScore(s);
    cout << result << endl;
    return 0;
}