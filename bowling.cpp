for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'X') {
        total += 10;
        if (frame < 9) {
            total += (s[i + 1] == 'X') ? 10 : ((s[i + 1] == '/') ? 10 : ((s[i + 2] == '/') ? 10 : ((s[i + 2] == 'X') ? 10 : (s[i + 2] == '-' ? 0 : (s[i + 2] - '0')))));
        } else if (frame == 9) {
            total += ((s[i + 1] == 'X') || (s[i + 2] == 'X')) ? 10 : ((s[i + 1] == '/') ? 10 : ((s[i + 1] == '-') ? 0 : (s[i + 1] - '0')));
        }
        frame++;
    } else if (s[i] == '/') {
        total += 10 - (s[i - 1] - '0');
        if (frame < 9) {
            total += (s[i + 1] == 'X') ? 10 : (s[i + 1] == '-' ? 0 : (s[i + 1] - '0'));
        }
        frame++;
    } else if (s[i] != '-') {
        total += s[i] - '0';
        if (frame < 9) {
            total += ((s[i + 1] == 'X') || (s[i + 1] == '/')) ? 10 : (s[i + 1] == '-' ? 0 : (s[i + 1] - '0'));
        }
        frame++;
    }
}