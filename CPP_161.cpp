Str solve(Str s){
    Str result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            result += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
        } else {
            result += s[i];
        }
    }
    return (result.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == Str::npos) ? Str(result.rbegin(), result.rend()) : result;
}