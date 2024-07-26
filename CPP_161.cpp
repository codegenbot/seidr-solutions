string solve(string s){
    int n = s.size();
    bool hasLetter = false;
    
    for(int i=0; i<n; i++){
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