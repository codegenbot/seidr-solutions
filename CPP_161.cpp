for (int i = 0; i < s.length(); ++i) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    
    size_t l = 0, r = s.length() - 1;
    while (l < r) {
        swap(s[l], s[r]);
        ++l;
        --r;
    }
    
    return s;
}