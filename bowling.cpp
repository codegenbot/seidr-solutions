if (s[i] == 'X') {
    score += 10;
    if (s[i+2] == 'X' && s[i+4] == 'X') {
        score += 10 + 10;
    } else if (s[i+2] == 'X') {
        score += 10 + (s[i+4] == 'X' ? 10 : s[i+4] - '0');
    } else if (s[i+2] == '/') {
        score += 10;
    } else {
        score += s[i+2] == '/' ? 10 : s[i+2] - '0';
        score += s[i+3] == '/' ? 10 : s[i+3] - '0';
    }
    i++;
} else if (s[i+1] == '/') {
    score += 10;
    score += s[i+3] == 'X' ? 10 : s[i+3] - '0';
    i += 2;
} else {
    score += s[i] == '-' ? 0 : s[i] - '0';
    score += s[i+1] == '-' ? 0 : s[i+1] - '0';
    i += 2;
}