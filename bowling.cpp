```cpp
int bowlingScore(const char* s) {
    int score = 0;
    int i = 0;
    while (i < strlen((char*)s)) {
        if (s[i] == 'X') {
            score += 10;
            i++;
            if (i < strlen((char*)s) && s[i] != '/') {
                score += 10;
                i++;
            }
        } else if ((s[i] - '0' + s[i+1] - '0') > 10) {
            int frame = 10;
            if (i+2 < strlen((char*)s)) {
                frame = 10 - (s[i] - '0' + s[i+1] - '0');
            }
            score += frame;
            i+=2;
        } else {
            int frame = s[i] - '0' + s[i+1] - '0';
            score += frame;
            i+=2;
        }
    }
    return score;
}