int score(std::string s) {
    int total = 0;
    int frame = 1;
    
    for (int i = 0; i < s.size() && frame <= 10; i++) {
        if (s[i] == 'X') {
            total += 10;
            if (frame < 10) {
                total += (s[i+2] == 'X') ? 10 : (s[i+2] == '/') ? 10 - (s[i+1] - '0') : (s[i+2] == '-') ? 0 : (s[i+2] - '0');
                if (s[i+2] == 'X' || s[i+4] == '/')
                    total += (s[i+4] == 'X') ? 10 : (s[i+4] == '/') ? 10 - (s[i+3] - '0') : (s[i+4] == '-') ? 0 : (s[i+4] - '0');
            } else {
                total += (s[i+2] == 'X') ? 10 : (s[i+2] == '/') ? 10 - (s[i+1] - '0') : (s[i+2] == '-') ? 0 : (s[i+2] - '0');
                total += (s[i+4] == 'X') ? 10 : (s[i+4] == '/') ? 10 - (s[i+3] - '0') : (s[i+4] == '-') ? 0 : (s[i+4] - '0');
            }
            frame++;
        } else if (s[i] == '/') {
            total += 10 - (s[i-1] - '0');
            total += (s[i+1] == 'X') ? 10 : (s[i+1] == '-') ? 0 : (s[i+1] - '0');
            if (frame < 10)
                total += (s[i+1] == 'X') ? 10 : (s[i+1] == '-') ? 0 : (s[i+1] - '0');
            frame++;
        } else if (s[i] != '-' && s[i] != '|') {
            total += (s[i] - '0');
            if (s[i] != '|')
                frame++;
        }
    }

    return total;
}