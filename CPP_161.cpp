string solve(string s){
    string res = "";
    for(int i=0; i<s.size(); i++){
        if(isalpha(s[i])){
            res += (s[i] >= 'a' && s[i] <= 'z') ? toupper(s[i]) : tolower(s[i]);
        } else {
            res += s[i];
        }
    }
    return res;
}