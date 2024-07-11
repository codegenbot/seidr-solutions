string solve(string s){
    string res = "";
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            res += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
        } else {
            res += s[i];
        }
    }
    return (res.find_first_of("abcdefghijklmnopqrstuvwxyz") == string::npos) 
           ? string(res.rbegin(), res.rend()) 
           : res;
}