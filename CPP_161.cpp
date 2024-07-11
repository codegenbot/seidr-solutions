string solve(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char temp = (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
            result += temp;
        } else {
            result += s[i];
        }
    }
    if(result.length() == 0) {
        reverse(s.begin(), s.end());
    }
    return result;
}