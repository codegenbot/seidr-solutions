for(char& c : s) {
        if(isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if(count_if(s.begin(), s.end(), isalpha) == 0) {
        reverse(s.begin(), s.end());
    }
    return s;
}