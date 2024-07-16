for (char &c : s) {
        if (isalpha(c)) {
            if (isupper(c)) {
                c = tolower(c);
            } else {
                c = toupper(c);
            }
        }
    }
    
    if (s.find_first_not_of("0123456789") == string::npos) {
        reverse(s.begin(), s.end());
    }
    
    return s;
}