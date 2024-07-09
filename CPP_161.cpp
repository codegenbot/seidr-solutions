for (int i = 0; i < s.length(); ++i) {
    if (isalpha(s[i])) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        } else {
            s[i] = toupper(s[i]);
        }
    }
}

if (count_if(s.begin(), s.end(), [](char c) { return isalpha(c); }) == 0) {
    reverse(s.begin(), s.end());
}

return s;