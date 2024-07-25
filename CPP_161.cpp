for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
        }
    }
    if (count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
        reverse(s.begin(), s.end());
    }
    return s;
}