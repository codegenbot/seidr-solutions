for(char &c : s) {
        if(isalpha(c)) {
            if(islower(c)) {
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    
    int n = s.length();
    if(n == 0) {
        reverse(s.begin(), s.end());
    }
    
    return s;
}