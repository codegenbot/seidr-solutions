string solve(string s){
    bool hasLetters = false;
    for(char &c : s){
        if(isalpha(c)){
            hasLetters = true;
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if(!hasLetters){
        reverse(s.begin(), s.end());
    }
    return s;
}