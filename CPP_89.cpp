string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char new_char = c + 2*2;
            if(islower(c)){
                if(new_char > 'z'){
                    new_char -= 26;
                }
            } else {
                if(new_char > 'Z'){
                    new_char -= 26;
                }
            }
            result += new_char;
        } else {
            result += c;
        }
    }
    return result;
}