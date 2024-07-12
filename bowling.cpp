int score(string s) {
    int total = 0, frame = 0, i = 0;
    while (frame < 10) {
        if (s[i] == 'X') {
            total += 10 + (s[i+2] == 'X' ? 10 : (s[i+2] == '/' ? 10 : s[i+2] - '0')) + (s[i+4] == 'X' ? 10 : (s[i+4] == '/' ? 10 : s[i+4] - '0'));
            if (s[i+2] != 'X') {
                i += 2;
            }
            else {
                i++;
            }
        } else if (s[i+1] == '/') {
            total += 10 + (s[i+2] == 'X' ? 10 : s[i+2] - '0');
            i += 3;
        } else {
            total += s[i] - '0' + s[i+1] - '0';
            i += 2;
        }
        frame++;
    }
    return total;
}