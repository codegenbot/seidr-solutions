string solve(string s){
    bool hasLetter = false;
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            hasLetter = true;
            s[i] = isupper(s[i]) ? tolower(s[i]) : toupper(s[i]);
        }
    }
    if(!hasLetter){
        reverse(s.begin(), s.end());
    }
    return s;
}