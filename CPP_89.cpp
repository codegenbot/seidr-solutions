string encrypt(string s){
    string result = "";
    for(char c : s){
        if(isalpha(c)){
            char new_char = c + 2 * (c > 'Z' ? 26 : 1);
            if((isupper(c) && new_char > 'Z') || (islower(c) && new_char > 'z')){
                new_char -= 26;
            }
            result += new_char;
        } else {
            result += c;
        }
    }
    return result;
}