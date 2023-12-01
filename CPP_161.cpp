string solve(string s){
    string result = "";
    bool hasLetters = false;
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            result += (islower(s[i]) ? toupper(s[i]) : tolower(s[i]));
            hasLetters = true;
        }
        else{
            result += s[i];
        }
    }
    if(!hasLetters){
        reverse(result.begin(), result.end());
    }
    return result;
}