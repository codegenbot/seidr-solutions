string solve(string s){
    bool hasLetter = false;
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
            hasLetter = true;
        }
    }
    if(!hasLetter){
        reverse(s.begin(), s.end());
    }
    return s;
}