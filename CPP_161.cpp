string solve(string s){
    string result = "";
    bool hasLetter = false;

    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            hasLetter = true;
            char c = (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
            result += c;
        }else{
            result += s[i];
        }
    }

    if(!hasLetter){
        reverse(result.begin(), result.end());
    }

    return result;
}