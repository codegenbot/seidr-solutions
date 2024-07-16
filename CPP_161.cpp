string solve(string s){
    int n = s.size();
    bool hasLetter = false;
    for(int i=0; i<n; i++){
        if(isalpha(s[i])){
            hasLetter = true;
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            } else {
                s[i] = toupper(s[i]);
            }
        }
    }
    if(!hasLetter){
        reverse(s.begin(), s.end());
    }
    return s;
}