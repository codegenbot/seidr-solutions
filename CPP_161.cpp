string solve(string s){
    string result = "";
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i])){
            result += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
}