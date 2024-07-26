for (int i = 0; i < s.size(); ++i) {
        if (isalpha(s[i])) {
            s[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
        }
    }
    if (count_if(s.begin(), s.end(), isalpha) == 0) {
        reverse(s.begin(), s.end());
    }
    return s;
}