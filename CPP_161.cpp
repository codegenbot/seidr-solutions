string solve(string s){
    string res = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            res += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
        }else{
            res += s[i];
        }
    }
    return res;
}