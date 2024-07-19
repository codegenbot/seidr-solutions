string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            char shifted = s[i] + 2 * 2;
            if(islower(s[i])){
                if(shifted > 'z'){
                    shifted = 'a' + (shifted - 'z' - 1);
                }
            } else {
                if(shifted > 'Z'){
                    shifted = 'A' + (shifted - 'Z' - 1);
                }
            }
            result += shifted;
        } else {
            result += s[i];
        }
    }
    return result;
}