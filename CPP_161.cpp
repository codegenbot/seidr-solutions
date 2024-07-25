string solve(string s){
    string result = "";
    bool hasLetter = false;

    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            result += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
            hasLetter = true;
        }else{
            result += s[i];
        }
    }

    return hasLetter ? result : string(result.rbegin(), result.rend());
}