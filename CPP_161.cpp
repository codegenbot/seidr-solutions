string solve(string s){
    bool containsLetter = false;
    for(char &c : s){
        if(isalpha(c)){
            c = islower(c) ? toupper(c) : tolower(c);
            containsLetter = true;
        }
    }
    if(!containsLetter){
        reverse(s.begin(), s.end());
    }
    return s;
}