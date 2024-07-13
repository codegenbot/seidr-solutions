string solve(string s){
    string result = "";
    bool hasLetter = false;

    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            if(islower(s[i]))
                result += toupper(s[i]);
            else
                result += tolower(s[i]);
            hasLetter = true;
        }
        else
            result += s[i];
    }

    if(!hasLetter)
        reverse(result.begin(), result.end());

    return result;
}