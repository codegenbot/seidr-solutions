string encrypt(string s){
    string encrypted = "";
    for(char c : s){
        if(isalpha(c)){
            char new_char = c + 2 * (c >= 'a' ? 1 : -1);
            if(new_char > 'z' || new_char < 'a'){
                new_char = (new_char - 'a' + 26) % 26 + 'a';
            }
            encrypted += new_char;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}