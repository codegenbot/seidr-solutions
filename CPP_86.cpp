for (int i = 0; i < s.size(); ++i) {
    if (s[i] == ' ') {
        continue;
    }
    int start = i;
    while (i < s.size() && s[i] != ' ') {
        ++i;
    }
    sort(s.begin() + start, s.begin() + i);
}
return s;