string solve(string s){
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
            else{
                s[i] = toupper(s[i]);
            }
        }
    }
    reverse(s.begin(), s.end());
    return s;
}