if (s[i] == 'X') {
    score += 10;
    if (s[i+2] == 'X' && (i + 4 < s.size() && s[i+4] == 'X')) {
        score += 20;
    } else if (s[i+2] == 'X') {
        score += 10 + (s[i+4] == 'X' ? 10 : s[i+4] - '0');
    } else if (s[i+3] == '/') {
        score += 10;
    } else {
        score += s[i+2] == '/' ? 10 : s[i+2] - '0';
        score += s[i+3] == '/' ? 10 : s[i+3] - '0';
    }
    i++;
}