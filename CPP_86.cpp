int i = 0;
    while(i < s.length()) {
        int j = i;
        while(j < s.length() && s[j] != ' ') {
            j++;
        }
        sort(s.begin() + i, s.begin() + j);
        i = j + 1;
    }
    return s;
}