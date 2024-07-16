string solve(string s){
    int n = s.size();
    bool containsLetter = false;
    for(int i=0; i<n; i++){
        if(isalpha(s[i])){
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
            containsLetter = true;
        }
    }
    if(!containsLetter){
        reverse(s.begin(), s.end());
    }
    return s;
}