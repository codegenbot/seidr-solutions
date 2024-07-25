string solve(string s){
    bool has_letter = false;
    for(char& c : s) {
        if(isalpha(c)) {
            has_letter = true;
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if(!has_letter) {
        reverse(s.begin(), s.end());
    }
    return s;
}