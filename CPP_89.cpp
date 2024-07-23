string encrypt(string s){
    string result = "";
    for(char& c : s){
        if(isalpha(c)){
            char new_char = c + 2*2;
            if(islower(c)){
                if(new_char > 'z'){
                    new_char = 'a' + (new_char - 'z' - 1);
                }
            } else {
                if(new_char > 'Z'){
                    new_char = 'A' + (new_char - 'Z' - 1);
                }
            }
            result += new_char;
        } else {
            result += c;
        }
    }
    return result;
}