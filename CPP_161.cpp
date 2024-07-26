string solve(string s){
    bool has_letter = false;
    for(char &c : s){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
            has_letter = true;
        }
    }
    if(!has_letter){
        reverse(s.begin(), s.end());
    }
    return s;
}