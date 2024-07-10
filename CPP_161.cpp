int solve(std::string s) {
    for (char& c : s) {
        c = std::tolower(c);
    }
    int length = s.length();
    for(int i=0; i<length; i++) {
        if(s[i] != ' ') {
            return i+1;
        }
    }
    return length;
}