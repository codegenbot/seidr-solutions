string solve(string s){
    string result;
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            result += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
        }else{
            result += s[i];
        }
    }
    if(result.empty()) reverse(result.begin(), result.end());
    return result;
}