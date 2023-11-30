string solve(string s){
    string result = "";
    bool hasLetters = false;
    
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            hasLetters = true;
            if(islower(s[i])){
                result += toupper(s[i]);
            }
            else{
                result += tolower(s[i]);
            }
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