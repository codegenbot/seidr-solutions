for (int i = 0; i < s.length(); i++) {
    if (isalpha(s[i])) {
        if (islower(s[i])) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    } else {
        s[i] = s[i];
    }
}
if (!any_of(s.begin(), s.end(), ::isalpha)) {
    reverse(s.begin(), s.end());
}
return s;