for (char &c : s) {
        if (isalpha(c)) {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    
    if (count_if(s.begin(), s.end(), [](char c){ return isalpha(c); }) == 0) {
        reverse(s.begin(), s.end());
    }
    
    return s;
}