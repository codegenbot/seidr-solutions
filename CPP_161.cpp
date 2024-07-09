string solve(string s){
    string result = "";
    bool has_letter = false;

    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i])){
            has_letter = true;
            result += (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
        } else {
            result += s[i];
        }
    }

    return has_letter ? result : string(reverse(result));
}