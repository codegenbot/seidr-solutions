string solve(string s){
    string result = "";
    bool has_letter = false;

    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            has_letter = true;
            if(islower(s[i])){   
                result += toupper(s[i]);
            }else{
                result += tolower(s[i]);
            }
        }else{
            result += s[i];
        }
    }

    if(!has_letter)
        reverse(result.begin(), result.end());

    return result;
}