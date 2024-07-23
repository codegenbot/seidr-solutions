for (int i = 0; i < s.size(); ++i) {
    if (isspace(s[i])) {
        continue;
    }
    int start = i;
    while (i < s.size() && !isspace(s[i])) {
        ++i;
    }
    sort(s.begin() + start, s.begin() + i);
}
return s;