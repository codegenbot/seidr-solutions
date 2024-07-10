
if (s[i] == 'X') {
    total += 10;
    if (i + 2 < s.size()) {
        total += (s[i + 1] == 'X' ? 10 : (s[i + 1] == '/' ? 10 - (s[i + 2] - '0') : s[i + 1] - '0'));
    }
    if (i + 3 < s.size()) {
        total += (s[i + 2] == 'X' ? 10 : (s[i + 2] == '/' ? 10 - (s[i + 3] - '0') : s[i + 2] - '0'));
        i++;
    }
} else if (i + 1 < s.size() && s[i + 1] == '/') {
    total += 10;
    if (i + 2 < s.size()) {
        total += (s[i + 2] == 'X' ? 10 : s[i + 2] - '0');
        i += 2;
    }
} else if (i + 1 < s.size() && i + 2 < s.size()) {
    total += (s[i] == '-' ? 0 : s[i] - '0');
    total += (s[i + 1] == '-' ? 0 : s[i + 1] - '0');
    i += 2;
} else {
    break;
}