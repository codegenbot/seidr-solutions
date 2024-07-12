int score(string s) {
    int res = 0, frame = 1, i = 0;
    
    while (frame <= 10 && i < s.size()) {
        if (s[i] == 'X') {
            res += 10 + (s[i + 1] == 'X' ? 10 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10));
            if (s[i + 2] == '/')
                res += 10 - (s[i + 1] == 'X' ? 0 : (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10));
            else
                res += (isdigit(s[i + 2]) ? s[i + 2] - '0' : 10);
            i++;
        } else if (isdigit(s[i]) || s[i] == '/')
            res += (s[i] == '/' ? 10 - (isdigit(s[i - 1]) ? s[i - 1] - '0' : 0) : s[i] - '0');
        i++;
        if (s[i] == '/')
            res += (isdigit(s[i + 1]) ? s[i + 1] - '0' : 10);
        frame++;
    }
    
    return res;
}