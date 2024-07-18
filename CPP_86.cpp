for (int i = 0; i < s.length(); i++) {
    if (s[i] != ' ') {
        int j = i;
        while (j < s.length() && s[j] != ' ') {
            j++;
        }
        sort(s.begin() + i, s.begin() + j);
        i = j;
    }
}
return s;
}